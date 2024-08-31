/*

Name : Nakul Siwach
Roll No : MT2024096
Program :13 Program :Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).


*/


#include<stdio.h>
#include<sys/select.h>
#include<unistd.h>
#include<time.h>

int main(){
    struct timeval timer;
    fd_set fd;
    FD_SET(0,&fd);
    timer.tv_sec=10;
    timer.tv_usec=0;
    int ret=select(1,&fd,NULL,NULL,&timer);
    if(ret==-1){
        printf("error");
    }
    else if(ret==0){
        printf("time limit reached");
    }
    else{
        printf("entered");
    }
    return 0;
}


/*

administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out 
time limit reached


*/