 // Catch and Count Signals
 

#include <stdio.h>
#include <signal.h>
#include <unistd.h>

volatile sig_atomic_t count = 0;

void sig_handler(int signum) {
    count++;
    printf("Signal count: %d\n", count);
}

int main() {
    signal(SIGUSR1, sig_handler);
    while (1) {
        printf("Waiting for SIGUSR1 signal...\n");
        sleep(1);
    }
    return 0;
}

