// Memory Protection:


#include <stdio.h>
#include <unistd.h>

int main() {
    int pagesize = sysconf(_SC_PAGE_SIZE);
    printf("Page size: %d bytes\n", pagesize);
    return 0;
}

