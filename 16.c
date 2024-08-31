/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 16. Write a program to perform mandatory locking a. Implement write lock

*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){

    int fd=open("file.txt",O_WRONLY);
    if(fd==-1) perror("error");

    struct flock lock={F_WRLCK,0,0,0,0};

    fcntl(fd,F_SETLK,&lock);

    printf("Press enter key to unlock the file");
    getchar();
    lock.l_type=F_UNLCK;
    fcntl(fd,F_SETLK,&lock);
    return 0;
}


/*

administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out 
error: Bad address
press enter to unlock the file

*/