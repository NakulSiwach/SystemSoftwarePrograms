/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : 1c. FIFO (mkfifo Library Function or mknod system call)

*/



#include <stdio.h>
#include <sys/stat.h>
//#include <stat.h>
int main(int argc,char *argv[]){
	int o=mkfifo(argv[1],S_IRWXU);
	if(o==0){
		printf("fifo special file is created\n");
	}
	return 0;
}


