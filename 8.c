/*

Name : Nakul Siwach
Roll No. : MT2024096
Program : 8. Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.

*/




#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main() {
    

    int file = open("file1.txt", O_RDONLY);
    char buf[256];
    char x;
    int i = 0;

    while ((read(file, &x, 1)) > 0) {
        buf[i++] = x;

        if (x == '\n' || i == 255) {
            buf[i] = '\0';
            printf("%s", buf);
            i = 0;
        }
    }

    close(file);
    return 0;
}


/*

./a.out file1.txt

rsdnf efddg fdfsdfdg gfjno
gfdfgfh 
hfdfffff hhhhhhh
dhdghgh tytm

*/