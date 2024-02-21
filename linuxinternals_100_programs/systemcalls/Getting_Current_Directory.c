// Get the current working directory.


#include <unistd.h>
#include <stdio.h>

int main() {
    char cwd[1024];
    if (getcwd(cwd, sizeof(cwd)) != NULL) {
        printf("Current working directory: %s\n", cwd);
    } else {
        perror("getcwd");
        return 1;
    }
    return 0;
}

