/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : c. FIFO (mkfifo Library Function or mknod system call)

*/


#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	const char*file="file1.txt";

	if(mknod(file,S_IFIFO | 0666,0) == -1){
		perror("mknod");
		return 1;
	}

	printf("FIFO file creted : %s\n", file);
	return 0;
}


/*

./a.out
mknod: File exists

*/
