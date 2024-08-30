/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 15. Write a program to display the environmental variable of the user (use environ).

*/

#include<stdio.h>
extern char **environ;
void main(){
    printf("%s\n",*environ);
}

/*

SHELL=/bin/bash

*/