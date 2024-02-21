#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int pipefd[2];
    pid_t pid;
    char buffer[20];
    
    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }
    
    pid = fork();
    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    
    if (pid == 0) { // Child process
        close(pipefd[1]); // Close the write end of the pipe
        read(pipefd[0], buffer, sizeof(buffer));
        printf("Child received: %s", buffer);
        close(pipefd[0]);
    } else { // Parent process
        close(pipefd[0]); // Close the read end of the pipe
        write(pipefd[1], "Hello from parent!", 18);
        close(pipefd[1]);
    }
    
    return 0;
}

