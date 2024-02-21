//  Create a new process using the fork() system call.

#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child process\n");
    } else if (pid > 0) {
        printf("Parent process\n");
    } else {
        perror("fork");
    }
    return 0;
}

