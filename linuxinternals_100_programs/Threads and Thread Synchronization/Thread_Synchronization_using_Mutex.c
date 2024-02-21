// Thread Synchronization using Mutex:


#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;
int counter = 0;

void* thread_function(void* arg) {
    pthread_mutex_lock(&lock);
    counter++;
    printf("Counter value: %d\n", counter);
    pthread_mutex_unlock(&lock);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread_id[5];
    pthread_mutex_init(&lock, NULL);
    for (int i = 0; i < 5; i++)
        pthread_create(&thread_id[i], NULL, thread_function, NULL);
    for (int i = 0; i < 5; i++)
        pthread_join(thread_id[i], NULL);
    pthread_mutex_destroy(&lock);
    return 0;
}

