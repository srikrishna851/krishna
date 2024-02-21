// Process Termination:


#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        exit(0);
    } else if (pid > 0) {
        sleep(5);
        printf("Parent process exiting\n");
    }
    return 0;
}

