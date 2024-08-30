
/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 
10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data.

*/


#include<sys/stat.h>
#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>


int main(){
	int f=open("file1.txt",O_RDWR | O_CREAT,S_IRWXU);
	
	char data[10]="qwertyuiop";
	
	write(f,data,10);
	
	int x = lseek(f,10,SEEK_CUR);

	printf("%d\n",x);

	write(f,data,10);
	
	x=lseek(f,0,SEEK_CUR);

	printf("%d\n",x);

	return 0;

}	



/*

./a.out file1.txt

20
30

od -c file2.txt

0000000   r   s   d   n   f       e   f   d   d   g       f   d   f   s
0000020   d   f   d   g       g   f   j   n   o  \n   g   f   d   f   g
0000040   f   h      \n   h   f   d   f   f   f   f   f       h   h   h
0000060   h   h   h   h  \n   d   h   d   g   h   g   h       t   y   t
0000100   m  \n
0000102


*/	
