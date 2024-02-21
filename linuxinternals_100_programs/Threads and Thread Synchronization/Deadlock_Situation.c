// Deadlock Situation:


#include <stdio.h>
#include <pthread.h>
#include <unistd.h> // Include this header for sleep function

pthread_mutex_t mutex1, mutex2;

void* thread1(void* arg) {
    pthread_mutex_lock(&mutex1);
    printf("Thread 1 acquired mutex1\n");
    sleep(1); // Use sleep function
    pthread_mutex_lock(&mutex2);
    printf("Thread 1 acquired mutex2\n");
    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex1);
    pthread_exit(NULL);
}

void* thread2(void* arg) {
    pthread_mutex_lock(&mutex2);
    printf("Thread 2 acquired mutex2\n");
    sleep(1); // Use sleep function
    pthread_mutex_lock(&mutex1);
    printf("Thread 2 acquired mutex1\n");
    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);
    pthread_exit(NULL);
}

int main() {
    pthread_t t1, t2;
    pthread_mutex_init(&mutex1, NULL);
    pthread_mutex_init(&mutex2, NULL);
    pthread_create(&t1, NULL, thread1, NULL);
    pthread_create(&t2, NULL, thread2, NULL);
    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_mutex_destroy(&mutex1);
    pthread_mutex_destroy(&mutex2);
    return 0;
}

