/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : 1a. soft link 

*/

#include<stdio.h>
#include<unistd.h>

int main(){

	const char*OriginalFile = "file1.txt";
	const char*SymlinkOriginalFile = "file2.txt";

	if(symlink(OriginalFile,SymlinkOriginalFile)!=0){
		perror("error creating link");
		return 1;
	}
	printf("Link generated: %s -> %s\n",SymlinkOriginalFile,OriginalFile);
	return 0;

}

/*
using shell command:-
touch file1
ln -s file1 file1sym
*/


/*
./a.out
Link generated: file2.txt -> file1.txt
*/
