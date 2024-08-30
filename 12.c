/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : 12. Write a program to find out the opening mode of a file. Use fcntl.

*/

#include <unistd.h>
#include <fcntl.h>
#include<stdio.h>


int main(){

    int fd = open("file1.txt", O_RDONLY);
    int fm = fcntl(fd, F_GETFL);
    printf("%d\n", fm);

    int accessMode = fm & O_ACCMODE;
    printf("%d\n", accessMode);

    switch (accessMode){
    case O_RDWR:
        printf("O_RDWR");
        break;
    case O_WRONLY:
        printf("O_WRONLY");
        break;
    case O_RDONLY:
        printf("O_RDONLY");
        break;
    default:
        break;
    }
}



/*

/a.out 

32768
0
O_RDONLY

*/