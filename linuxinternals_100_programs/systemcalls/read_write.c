// Copy a file using read() and write() system calls.


#include <fcntl.h>
#include <unistd.h>

int main() {
    char buffer[1024];
    int source_fd = open("source.txt", O_RDONLY);
    int dest_fd = open("destination.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (source_fd != -1 && dest_fd != -1) {
        int bytes_read;
        while ((bytes_read = read(source_fd, buffer, sizeof(buffer))) > 0) {
            write(dest_fd, buffer, bytes_read);
        }
        close(source_fd);
        close(dest_fd);
    }
    return 0;
}

