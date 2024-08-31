/*

Name : Nakul Siwach
Roll No : MT2024096
26. Write a program to execute an executable program.
a. use some executable program

*/

#include <unistd.h> 

void main()
{
    char *path = "./a.out";
    char *arg = "pracc.c";
    execl(path,path, arg, NULL);
}


/*
./a.out
*/