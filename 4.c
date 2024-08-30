/*

Name: Nakul Siwach
Roll No : MT2024096
Program : 4. Write a program to open an existing file with read write mode. Try O_EXCL flag also.

*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int f=open("file1.txt",O_RDWR);
	printf("%d\n",f);
	int n=open("file1.txt",O_EXCL);
	printf("%d\n",n);
 
}