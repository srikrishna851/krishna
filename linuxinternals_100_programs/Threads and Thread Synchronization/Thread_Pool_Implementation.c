// Thread Pool Implementation:



#include <stdio.h>
#include <pthread.h>

#define NUM_THREADS 4

void* worker(void* arg) {
    int thread_id = *((int*)arg);
    printf("Thread %d is processing task\n", thread_id);
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    int thread_ids[NUM_THREADS];
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_ids[i] = i;
        pthread_create(&threads[i], NULL, worker, &thread_ids[i]);
    }
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
    }
    return 0;
}


