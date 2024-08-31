/*

Name : Nakul Siwach
Roll No : MT2024096
Program :25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).

*/

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    int i = 0, childid[3];

    while (i < 3)
    {
        childid[i] = fork();
        if (childid[i] == 0)pause();
        else{
            printf("for parent %d chile %d's pid is %d \n", getpid(), i + 1, childid[i]);
            i++;
        }
    }

    int id, status;
    printf("enter the child (it's parent will wait): ");
    scanf("%d", &id);
    waitpid(childid[id - 1], &status, 0);
    printf("child %d is exited\n",childid[id-1]);
    return 0;
}

/*

./a.out
for parent 58054 chile 1's pid is 58055 
for parent 58054 chile 2's pid is 58056 
for parent 58054 chile 3's pid is 58057 
enter the child (it's parent will wait): 2
^C

*/