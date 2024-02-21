// File-based Communication:


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[100];

    file = fopen("file.txt", "w+");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "Hello from the file!\n");

    rewind(file);
    fgets(buffer, sizeof(buffer), file);
    printf("Data read: %s", buffer);

    fclose(file);

    return 0;
}

