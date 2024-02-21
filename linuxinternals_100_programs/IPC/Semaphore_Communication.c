////   Semaphore Communication:
//
//


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/sem.h>

#define SEMKEY 12345

int main() {
    int semid, nsems, nsops, rv;
    struct sembuf sembuf;
    union semun {
        int val;
        struct semid_ds *buf;
        ushort *array;
    } semctl_arg;

    nsems = 1;
    semid = semget(SEMKEY, nsems, IPC_CREAT | IPC_EXCL | 0666);
    if (semid >= 0) {
        printf("Semaphore created\n");
        semctl_arg.val = 0;
        rv = semctl(semid, 0, SETVAL, semctl_arg);
    } else if ((semid = semget(SEMKEY, nsems, 0)) >= 0) {
        printf("Semaphore already exists\n");
    } else {
        perror("semget");
        exit(1);
    }

    nsops = 1;
    sembuf.sem_num = 0;
    sembuf.sem_op = 1;
    sembuf.sem_flg = 0;
    if (semop(semid, &sembuf, nsops) == -1) {
        perror("semop");
        exit(1);
    }

    return 0;
}

