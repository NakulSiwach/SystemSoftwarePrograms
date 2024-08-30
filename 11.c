/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 
11. Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
c. use fcntl

*/


#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>

int main(){
    int filedescr = open("11.txt", O_CREAT | O_RDWR | O_APPEND, S_IRWXU);
    if(filedescr<0) printf("Error opening file");
    
    int d=dup(filedescr);
    int d2=dup2(filedescr,7);
    int dfcntl=fcntl(filedescr,F_DUPFD,7);


    write(filedescr,"old fd \n",strlen("ld fd \n"));
    write(d,"dupli \n",strlen("dupli \n"));
    write(d2,"dupli 2\n",strlen("dupli 2\n"));
    write(dfcntl,"dup fcntl 2\n",strlen("dup fcntl\n"));


    return 0;
}