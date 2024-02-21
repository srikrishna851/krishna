//Change file permissions using the chmod() system call.



#include <sys/stat.h>

int main() {
    chmod("opensc.txt", S_IRUSR | S_IWUSR); // Read and write permissions for the owner
    return 0;
}


