import mraa
import time

# I2C bus and device configuration
I2C_BUS = 0
AHT25_ADDR = 0x38
AHT25_INIT_CMD = 0xE1
AHT25_MEASURE_CMD = 0xAC

# Initialize I2C bus and device
i2c = mraa.I2c(I2C_BUS)
i2c.address(AHT25_ADDR)

# Initialize the AHT25 sensor
i2c.writeByte(AHT25_INIT_CMD)
time.sleep(0.05)

# UART configuration
uart = mraa.Uart(0)
uart.setBaudRate(115200)
uart.setMode(8, mraa.UART_PARITY_NONE, 1)
uart.setFlowcontrol(False, False)

def read_sensor_values():
    data = i2c.readBytesReg(AHT25_MEASURE_CMD, 6)
    humidity = ((data[1] << 12) | (data[2] << 4) | (data[3] >> 4)) / 1048576.0 * 100.0
    temperature = (((data[3] & 0x0F) << 16) | (data[4] << 8) | data[5]) / 1048576.0 * 200.0 - 50.0
    return temperature, humidity

while True:
    # Read sensor values
    temperature, humidity = read_sensor_values()

    # Print the temperature and humidity
    print("Temperature: {:.2f} °C".format(temperature))
    print("Humidity: {:.2f} %".format(humidity))
    time.sleep(1)

    # Write temperature to UART
    uart.write(bytearray(str(temperature) + '\n', 'utf-8'))

    # Wait for a second before reading again
    time.sleep(1)

# Clean up (not executed in an infinite loop)
i2c.close()
uart.close()

