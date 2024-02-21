// Wait for a child process to terminate using the wait() system call.


#include <stdio.h>    // For printf and perror
#include <stdlib.h>   // For exit
#include <sys/wait.h> // For wait
#include <unistd.h>   // For fork

int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child process\n");
    } else if (pid > 0) {
        wait(NULL);
        printf("Parent process\n");
    } else {
        perror("fork");
    }
    return 0;
}

