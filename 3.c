/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : 3. Write a program to create a file and print the file descriptor value. Use creat ( ) system call

*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int file=creat("file.txt",S_IRUSR |S_IWUSR);
	if(file==-1){
		perror("creat");
		return 1;
	} 
	
	printf("file descriptor for the file is:- %d\n",file);
	close(file);
	return 0;
}


/*

./a.out
file descriptor for the file is:- 3

*/
