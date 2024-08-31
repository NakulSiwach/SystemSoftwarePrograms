/*

Name : Nakul Siwach
Roll No : MT2024096
Program :14 Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file.


*/

#include<stdio.h>
#include <sys/stat.h>   
#include <stdlib.h>     
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    struct stat fileStat;

    if (lstat(argv[1], &fileStat) == -1) {
        perror("Error determining file type");
        exit(EXIT_FAILURE);
    }

    if (S_ISREG(fileStat.st_mode)) {
        printf("Regular file.\n");
	} else if (S_ISSOCK(fileStat.st_mode)) {
        printf("Socket.\n");
    } else if (S_ISLNK(fileStat.st_mode)) {
        printf("Smbolic link.\n");
    } else if (S_ISCHR(fileStat.st_mode)) {
        printf("Character device.\n");
    } else if (S_ISBLK(fileStat.st_mode)) {
        printf("Block device.\n");
	} else if (S_ISDIR(fileStat.st_mode)) {
        printf("Directory.\n");
    } else if (S_ISFIFO(fileStat.st_mode)) {
        printf("FIFO (named pipe).\n");
    } else {
        printf("Unknown file type.\n");
    }

    return 0;
}

/*

administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out file1.txt
Regular file.
administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out a.out
Regular file.
administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out practice.c
Regular file.


*/