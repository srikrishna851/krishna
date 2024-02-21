

//List files in a directory using opendir(), readdir(), and closedir() system calls.

#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <stddef.h> // For NULL

int main() {
    DIR *dir = opendir(".");
    if (dir != NULL) {
        struct dirent *entry;
        while ((entry = readdir(dir)) != NULL) {
            printf("%s\n", entry->d_name);
        }
        closedir(dir);
    }
    return 0;
}

