#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct msg_buffer {
    long msg_type;
    char msg_text[100];
};

int main() {
    key_t key;
    int msgid;
    struct msg_buffer message;

    key = ftok("progfile", 65);
    msgid = msgget(key, 0666 | IPC_CREAT);

    message.msg_type = 1;
    printf("Enter message: ");
    fgets(message.msg_text, sizeof(message.msg_text), stdin);

    msgsnd(msgid, &message, sizeof(message), 0);
    printf("Data sent is: %s\n", message.msg_text);

    return 0;
}

