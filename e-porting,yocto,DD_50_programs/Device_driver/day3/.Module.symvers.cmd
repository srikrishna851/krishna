cmd_/home/srikrishna/Device_driver/day3/Module.symvers := sed 's/\.ko$$/\.o/' /home/srikrishna/Device_driver/day3/modules.order | scripts/mod/modpost -m -a  -o /home/srikrishna/Device_driver/day3/Module.symvers -e -i Module.symvers   -T -