/*

Name : Nakul Siwach
Roll No : MT2024096
Program :17. Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit.

*/
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int fd = open("/home/administrator/systemsoftwarepracticals/file.txt", O_RDWR);
    struct flock l = {F_WRLCK, SEEK_SET, 0, 0, 0};
    fcntl(fd, F_SETLKW, &l);
    printf("File lock success\n");

    char buf[100];
    
    int n = read(fd, &buf, 10);

    int buf_int = atoi(buf);
    buf_int += 1;
    sprintf(buf, "%d", buf_int);
    
    lseek(fd,0,SEEK_SET);
    write(fd, &buf, strlen(buf));
    printf("%d\t \n", buf_int);
    
    getchar();
    l.l_type = F_UNLCK;
    fcntl(fd, F_SETLKW, &l);
    printf("file unlocked\n");
    return 0;
}

/*

cat file.txt
201097
administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out 
File lock success
201098   

file unlocked

*/