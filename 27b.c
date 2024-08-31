/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 27. Write a program to execute ls -Rl by the following system calls
b. execlp
*/

#include <stdio.h>
#include <unistd.h>
int main(){
    char *path = "ls";
    execlp(path, path, "-Rl", NULL);
    return 0;
}


/*

./a.out
.:
total 48
-rwx------ 1 administrator administrator    64 Aug 30 22:54 11.txt
-rwxrwxr-x 1 administrator administrator 15968 Aug 31 14:49 a.out
-rw-rw-r-- 1 administrator administrator    54 Aug 31 12:22 file1.txt
-rw-rw-r-- 1 administrator administrator    56 Aug 31 12:28 file3.txt
-rw-rw-r-- 1 administrator administrator    54 Aug 31 12:21 file.txt
-rw-rw-r-- 1 administrator administrator  4142 Aug 31 14:42 pracc.c
-rw-rw-r-- 1 administrator administrator  3148 Aug 31 14:49 practice.c
-rw-rw-r-- 1 administrator administrator     0 Aug 21 19:52 readme.md
drwxrwxr-x 3 administrator administrator  4096 Aug 31 14:49 SystemSoftwarePrograms

./SystemSoftwarePrograms:
total 132
-rw-rw-r-- 1 administrator administrator 1033 Aug 30 22:40 10.c
-rw-rw-r-- 1 administrator administrator  799 Aug 30 23:03 11.c
-rw-rw-r-- 1 administrator administrator  652 Aug 30 23:03 12.c
-rw-rw-r-- 1 administrator administrator  766 Aug 31 11:32 13.c
-rw-rw-r-- 1 administrator administrator 1504 Aug 31 11:30 14.c
-rw-rw-r-- 1 administrator administrator 4142 Aug 31 12:58 15.c
-rw-rw-r-- 1 administrator administrator  608 Aug 31 11:37 16.c
-rw-rw-r-- 1 administrator administrator  804 Aug 31 11:44 17a.c
-rw-rw-r-- 1 administrator administrator 1054 Aug 31 11:49 17b.c
-rw-rw-r-- 1 administrator administrator 1038 Aug 31 12:24 18a.c
-rw-rw-r-- 1 administrator administrator    0 Aug 31 12:16 18b.c
-rw-rw-r-- 1 administrator administrator  575 Aug 31 12:32 19.c
-rw-rw-r-- 1 administrator administrator  516 Aug 30 14:14 1a.c
-rw-rw-r-- 1 administrator administrator  501 Aug 30 14:14 1b.c
-rw-rw-r-- 1 administrator administrator  317 Aug 30 14:29 1c.c
-rw-rw-r-- 1 administrator administrator  594 Aug 30 23:44 20.c
-rw-rw-r-- 1 administrator administrator  454 Aug 30 23:47 21.c
-rw-rw-r-- 1 administrator administrator  715 Aug 31 11:25 22.c
-rw-rw-r-- 1 administrator administrator  530 Aug 31 12:36 23.c
-rw-rw-r-- 1 administrator administrator  496 Aug 31 12:47 24.c
-rw-rw-r-- 1 administrator administrator  929 Aug 31 12:51 25.c
-rw-rw-r-- 1 administrator administrator  275 Aug 31 14:45 26a.c
-rw-rw-r-- 1 administrator administrator  374 Aug 31 14:47 26b.c
-rw-rw-r-- 1 administrator administrator 3152 Aug 31 14:49 27a.c
-rw-rw-r-- 1 administrator administrator    0 Aug 31 14:49 27b.c
-rw-rw-r-- 1 administrator administrator  190 Aug 30 14:19 2.c
-rw-rw-r-- 1 administrator administrator  462 Aug 30 14:19 3.c
-rw-rw-r-- 1 administrator administrator  321 Aug 30 14:22 4.c
-rw-rw-r-- 1 administrator administrator  938 Aug 30 22:20 5.c
-rw-rw-r-- 1 administrator administrator  322 Aug 30 14:42 6.c
-rw-rw-r-- 1 administrator administrator  634 Aug 30 15:59 7.c
-rw-rw-r-- 1 administrator administrator  700 Aug 30 22:25 8.c
-rw-rw-r-- 1 administrator administrator 1589 Aug 30 14:42 9.c
-rw-rw-r-- 2 administrator administrator   21 Aug 30 12:22 file1.txt
-rw-rw-r-- 1 administrator administrator    0 Aug 30 08:11 readme.md

*/