/*

Name : Nakul Siwach
Roll No : MT2024096
Program :22. Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file.

*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
int main(int argc, char *argv[])
{

    fork();
    int fd = open("file1.txt", O_WRONLY | O_APPEND | O_CREAT, S_IRWXU);
    char buf[27];
    sprintf(buf, "written by process %d \n", getpid());
    write(fd, &buf, sizeof(buf));
}


/*

./a.out
mynameis nakulsiwach 
process :- 48311 
P���Fprocess :- 48312 
P���Fprocess :- 48336 
P3�Qprocess :- 48337 
P3�Qwritten by process 48632 
written by process 48633

*/