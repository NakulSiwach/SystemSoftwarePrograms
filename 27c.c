/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 27. Write a program to execute ls -Rl by the following system calls
c. execle
*/

#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[],char *env[]){
    char *path = "/bin/ls";
    execle(path, path, "-Rl" ,argv[1],NULL, env);
    return 0;
}

/*

./a.out
-rw-rw-r-- 1 administrator administrator 54 Aug 31 12:21 file.txt

*/