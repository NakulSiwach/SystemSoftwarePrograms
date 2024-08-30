/*

Name: Nakul Siwach
Roll No.: MT2024096
Program : 6. Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls

*/


#include<stdio.h>
#include<unistd.h>

int main(){

	char buf[100];

	int x = read(0,buf,20);

	write(1,buf,x);
}


/*

./a.out

fddfjdcug,shfn
fddfjdcug,shfn

*/

