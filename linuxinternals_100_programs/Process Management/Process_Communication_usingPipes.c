// Process Communication using Pipes:

#include <stdio.h>
#include <unistd.h>

int main() {
    int pipefd[2];
    char buf[255];
    if (pipe(pipefd) == -1) {
        perror("pipe");
        return 1;
    }
    pid_t pid = fork();
    if (pid == -1) {
        perror("fork");
        return 1;
    } else if (pid == 0) { // Child process
        close(pipefd[1]); // Close unused write end
        read(pipefd[0], buf, sizeof(buf));
        printf("Child received message: %s\n", buf);
        close(pipefd[0]); // Close read end
    } else { // Parent process
        close(pipefd[0]); // Close unused read end
        printf("Enter a message: ");
        fgets(buf, sizeof(buf), stdin);
        write(pipefd[1], buf, sizeof(buf));
        close(pipefd[1]); // Close write end
    }
    return 0;
}

