// Handle Signals:


#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void sigint_handler(int signum) {
    printf("Received SIGINT signal\n");
}

int main() {
    signal(SIGINT, sigint_handler);
    while (1) {
        printf("Waiting for SIGINT signal...\n");
        sleep(1);
    }
    return 0;
}

