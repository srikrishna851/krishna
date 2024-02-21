//Read from a file using the read() system call.


#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[1024];
    int fd = open("opensc.txt", O_RDONLY);
    if (fd != -1) {
        int bytes_read = read(fd, buffer, sizeof(buffer));
        write(STDOUT_FILENO, buffer, bytes_read);
        close(fd);
    }
    return 0;
}

