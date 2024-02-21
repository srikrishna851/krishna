// Signal Communication:
//
//
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void sig_handler(int signum) {
    printf("Received signal: %d\n", signum);
}

int main() {
    signal(SIGINT, sig_handler);

    while (1) {
        printf("Program running...\n");
        sleep(1);
    }

    return 0;
}

