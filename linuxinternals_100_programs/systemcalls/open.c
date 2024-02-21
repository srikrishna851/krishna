
//Create a new file using the open() system call.

#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd = open("opensc.txt", O_CREAT | O_WRONLY, 0644);
    if (fd != -1) {
        write(fd, "Hello, world!\n", 14);
        close(fd);
    }
    return 0;
}

