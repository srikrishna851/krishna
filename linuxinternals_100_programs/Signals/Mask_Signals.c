// Mask Signals:


#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int main() {
    sigset_t mask;
    sigfillset(&mask);
    sigprocmask(SIG_SETMASK, &mask, NULL);
    printf("All signals masked. Try sending any signal.\n");
    sleep(10);
    return 0;
}

