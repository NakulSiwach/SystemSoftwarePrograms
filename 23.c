/*

Name : Nakul Siwach
Roll No : MT2024096
Program :23. Write a program to create a Zombie state of the running program.

*/

#include <sys/types.h> 
#include <unistd.h>  
#include <stdio.h>    

void main()
{
    pid_t child;

    if ((child = fork()) != 0){
        printf("Parent PID: %d\n", getpid());
        sleep(10);
    }
    else{
        printf("Child PID: %d\n", getpid());
        printf("child done\n");
        _exit(0);
    }
}

/*

./a.out
Parent PID: 56971
Child PID: 56972
child done
^C                    

*/