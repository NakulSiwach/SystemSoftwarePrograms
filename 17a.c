/*

Name : Nakul Siwach
Roll No : MT2024096
Program :17. Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit.

*/

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


int main()
{
    printf("Enter ticket number:\t");

    int fd = open("file.txt", O_RDWR | O_CREAT, S_IRWXU);

    if (fd == -1){
        perror("Error while opening file!");
        return 0;
    }
    char *buffer[10];
    int n = read(0, buffer, 10);
    write(fd, buffer, n);


    printf("Ticket number is stored in file \n");
    return 0;
}

/*

administrator@administrator-82LN:~/systemsoftwarepracticals$ ./a.out file.txt
201096
Enter ticket number:    Ticket number is stored in file

*/