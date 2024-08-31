/*

Name : Nakul Siwach
Roll No : MT2024096
Program :18. Write a program to perform Record locking.
a. Implement write lock

*/



#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

typedef struct record
{
    int id;
    int ticket;
} record;

int main(){

    record r1 = {10, 10};
    record r2 = {100, 100};
    record r3 = {50, 50};
    int fd = open("file3.txt", O_WRONLY | O_CREAT, S_IRWXU);
    char buf[18];

    sprintf(buf, "id=%d ticket_no=%d\n", r1.id, r1.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf, 0, sizeof(buf));

    sprintf(buf, "id=%d ticket_no=%d\n", r2.id, r2.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf, 0, sizeof(buf));

    sprintf(buf, "id=%d ticket_no=%d\n", r3.id, r3.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf,0,sizeof(buf));

    return 0;
}

/*

./a.out
administrator@administrator-82LN:~/systemsoftwarepracticals$ cat file3.txt
id=10 ticket_no=10id=100 ticket_no=1id=50 ticket_no=50

*/