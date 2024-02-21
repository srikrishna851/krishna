// Shared Object Communication:


#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h> // Include stdlib.h for exit and EXIT_FAILURE

int main() {
    void *handle;
    void (*hello)();

    handle = dlopen("./libexample.so", RTLD_LAZY);
    if (!handle) {
        fprintf(stderr, "%s\n", dlerror());
        exit(EXIT_FAILURE);
    }

    hello = dlsym(handle, "hello");
    if (!hello) {
        fprintf(stderr, "%s\n", dlerror());
        exit(EXIT_FAILURE);
    }

    hello();

    dlclose(handle);
    
    return 0;
}

