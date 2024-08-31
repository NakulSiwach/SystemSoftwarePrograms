/*

Name : Nakul Siwach
Roll No : MT2024096
Program :24. Write a program to create an orphan process.

*/

#include <sys/types.h> 
#include <unistd.h>    
#include <stdio.h> 

void main(){
    pid_t child;

    if ((child = fork()) != 0){
        printf("Parent PID: %d\n", getpid());
        sleep(5);
        _exit(0); 
    }
    else{
        printf("Child PID: %d\n", getpid());
        sleep(10); 
        printf("Child awake!\n");
    }
}

/*

./a.out
Parent PID: 57456
Child PID: 57457

*/