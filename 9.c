/*
Name : Nakul Siwach
Roll No : MT2024096
Program : 9. Write a program to print the following information about a given file.
*/

#include<stdio.h>
#include<sys/stat.h>
#include<time.h>

int main(){
	struct stat file;
	
	if(stat("file1.txt",&file) == -1){
		perror("Error\n");
		return 1;
	}

	printf("inode:- %lu\n",file.st_ino);
	printf("number of hard links:- %lu\n",file.st_nlink);
	printf("uid:- %u\n",file.st_uid);
	printf("gid:- %u\n",file.st_gid);
	printf("size:- %ld bytes\n",file.st_size);
	printf("block size:- %ld bytes\n",file.st_blksize);
	printf("number of blocks:- %ld\n", file.st_blocks);
    printf("time of last access:- %s", ctime(&file.st_atime));
    printf("time of last modification:- %s", ctime(&file.st_mtime));
    printf("time of last change:- %s", ctime(&file.st_ctime));
    return 0;
}

/*

inode:- 5921594
number of hard links:- 3
uid:- 1000
gid:- 1000
size:- 12 bytes
block size:- 4096 bytes
number of blocks:- 8
time of last access:- Fri Aug 30 14:21:30 2024
time of last modification:- Fri Aug 30 14:21:30 2024
time of last change:- Fri Aug 30 14:21:30 2024
administrator@administrator-82LN:~/systemsoftwarepracticals$ g++ practice.c
administrator@administrator-82LN:~/systemsoftwarepracticals$ g++ practice.c
administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out
inode:- 5921594
number of hard links:- 3
uid:- 1000
gid:- 1000
size:- 12 bytes
block size:- 4096 bytes
number of blocks:- 8
time of last access:- Fri Aug 30 14:21:30 2024
time of last modification:- Fri Aug 30 14:21:30 2024
time of last change:- Fri Aug 30 14:21:30 2024

*/