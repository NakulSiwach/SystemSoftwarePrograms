/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : b. Hard link 

*/

#include<stdio.h>
#include<unistd.h>

int main(){

	const char*OriginalFile = "file1.txt";
	const char*HardlinkOriginalFile = "file2.txt";

	if(link(OriginalFile,HardlinkOriginalFile)!=0){
		perror("error creating link");
		return 1;
	}
	printf("Link generated: %s -> %s\n",HardlinkOriginalFile,OriginalFile);
	return 0;

}

/*
using shell command:-
ln file1 file1sym
*/


/*
./a.out
Link generated: file2.txt -> file1.txt
*/
