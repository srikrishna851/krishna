//Delete a file using the unlink() system call.


#include <unistd.h>

int main() {
    unlink("example.txt");
    return 0;
}

