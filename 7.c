/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : 7. Write a program to copy file1 into file2 ($cp file1 file2).

*/


#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(){

	int file1=open("file1.txt",O_RDONLY);
	if(file1 == -1){

		printf("error1");
		close(file1);
	}
	
	int file2=open("file2.txt",O_WRONLY|O_CREAT,S_IRWXU);

	if(file2==-1){

		printf("error2");
		close(file2);
	}
	char c;
	while(read(file1,&c,1)){
		write(file2,&c,1);
	}
	printf("File is copied Successfully");
	close(file1);
	close(file2);
	return 0;
}


/*

./a.out
File is copied Successfully

*/