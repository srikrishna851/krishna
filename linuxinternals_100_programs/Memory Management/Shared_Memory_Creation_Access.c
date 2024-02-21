//Shared Memory Creation and Access:

#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#define SHM_SIZE 1024

int main() {
    key_t key = ftok("shmfile",65);
    int shmid = shmget(key, SHM_SIZE, 0666|IPC_CREAT);
    char *str = (char*) shmat(shmid,(void*)0,0);
    printf("Write data : ");
    fgets(str, SHM_SIZE, stdin);
    printf("Data written in memory: %s\n",str);
    shmdt(str);
    return 0;
}

