// Ignore Signal:

#include <stdio.h>
#include <signal.h>
#include <unistd.h> // Include this header for sleep function

int main() {
    signal(SIGINT, SIG_IGN);
    while (1) {
        printf("Press Ctrl+C but I'll ignore it...\n");
        sleep(1);
    }
    return 0;
}

