/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 20. Find out the priority of your running program. Modify the priority with nice command.

*/


#include <unistd.h> 
#include <stdio.h>  
#include <stdlib.h> 

void main(int argc, char *argv[])
{
    int p, newp;
    if (argc != 2)
        printf("Enter priority");
    else
    {
        newp = atoi(argv[1]);
        p = nice(0); 
        printf("Priority of Current program: %d\n", p);
        p = nice(newp); 
        printf("Modified priority: %d\n", p);
    }
}



/*

./a.out 3
Priority of Current program: 0
Modified priority: 3

*/