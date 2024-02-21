// Thread Synchronization using Semaphore:


#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

sem_t semaphore;
int shared_data = 0;

void* thread_function(void* arg) {
    sem_wait(&semaphore);
    shared_data++;
    printf("Updated shared data: %d\n", shared_data);
    sem_post(&semaphore);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread_id[5];
    sem_init(&semaphore, 0, 1);
    for (int i = 0; i < 5; i++)
        pthread_create(&thread_id[i], NULL, thread_function, NULL);
    for (int i = 0; i < 5; i++)
        pthread_join(thread_id[i], NULL);
    sem_destroy(&semaphore);
    return 0;
}

