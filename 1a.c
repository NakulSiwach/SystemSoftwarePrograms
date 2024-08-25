/*

Name : Nakul Siwach
Roll No. : MT2024096
Program :a. soft link 

*/

#include<stdio.h>
#include<unistd.h>

int main(){

	const char*t = "file1.txt";
	const char*l = "file2.txt";

	if(symlink(t,l)!=0){
		perror("error creating link");
		return 1;
	}
	printf("Link generated: %s -> %s\n",l,t);
	return 0;

}


/*

./a.out
symlink: File exists

*/
