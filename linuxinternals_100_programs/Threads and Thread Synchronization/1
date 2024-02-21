// Passing Data to Thread:


#include <stdio.h>
#include <pthread.h>

void* thread_function(void* arg) {
    int value = *((int*)arg);
    printf("Received value in thread: %d\n", value);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread_id;
    int value = 42;
    pthread_create(&thread_id, NULL, thread_function, &value);
    pthread_join(thread_id, NULL);
    return 0;
}

