
            
//	    Named Pipe (FIFO):

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define FIFO_FILE "MYFIFO"

int main() {
    int fd;
    char readbuf[80];
    char end[10];
    int to_end;
    int read_bytes;

    mknod(FIFO_FILE, S_IFIFO|0640, 0);

    strcpy(end, "end");

    fd = open(FIFO_FILE, O_RDONLY);
    while (1) {
        read_bytes = read(fd, readbuf, sizeof(readbuf));
        readbuf[read_bytes] = '\0';
        printf("Received string: \"%s\" and length is %d\n", readbuf, (int)strlen(readbuf));
        to_end = strcmp(readbuf, end);
        if (to_end == 0) {
            close(fd);
            break;
        }
    }

    return 0;
}

