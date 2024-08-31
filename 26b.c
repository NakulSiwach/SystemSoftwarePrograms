/*

Name : Nakul Siwach
Roll No : MT2024096
26. Write a program to execute an executable program.
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
*/

#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    char *filepath = argv[1];
    argv++;
    execv(filepath, argv);
    return 0;
}


/*
./a.out
*/