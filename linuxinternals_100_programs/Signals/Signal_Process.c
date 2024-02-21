// Signal to Process:


#include <stdio.h>
#include <signal.h>

int main() {
    int pid = 38226; // Replace with valid process ID
    kill(pid, SIGTERM);
    return 0;
}

