/*

Name : Nakul Siwach
Roll No : MT2024096
Program :21. Write a program, call fork and print the parent and child process id.

*/


#include <sys/types.h> 
#include <unistd.h>    
#include <stdio.h>    

void main(){
    int child, parent;
    parent = getpid();
    printf("Parent's P_ID: %d\n", parent);
    child = fork();
    if (child != 0)
        printf("Child's P_ID: %d\n", child);
}



/*

./a.out

Parent's P_ID: 47936
Child's P_ID: 47937

*/