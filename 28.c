/*

Name : Nakul Siwach
Roll No : MT2024096
Program :28. Write a program to get maximum and minimum real time priority.

*/

#include <sched.h> 
#include <stdio.h> 

void main(){

    int maxi, mini;
    maxi = sched_get_priority_max(SCHED_RR);
    if (maxi == -1)perror("Error\n");
    else printf("max reat time priority : %d\n", maxi);

    mini = sched_get_priority_min(SCHED_RR);
    if (mini == -1) perror("Error\n");
    else printf("min reat time priority : %d\n", mini);
}

/*

max reat time priority : 99
min reat time priority : 1

*/