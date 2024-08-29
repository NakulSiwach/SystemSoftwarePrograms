/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : c. FIFO (mkfifo Library Function or mknod system call)

*/



#include <stdio.h>
#include <sys/stat.h>


int main(int argc,char *argv[]){
	int o=mkfifo(argv[1],S_IRWXU);
	if(o==0){
		printf("fifo special file created\n");
	}
	return 0;
}


/*

./a.out
mknod: File exists

*/
