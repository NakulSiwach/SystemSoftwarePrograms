/*

Name : Nakul Siwach
Roll No : MT2024096
Program :19. Write a program to find out time taken to execute getpid system call. Use time stamp counter.

*/

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

unsigned long long rdtsc()
{
    unsigned long long dst;
    __asm__ __volatile__("rdtsc": "=A"(dst));
    return dst;
}

void main(){
    long long int start,end;
    start = rdtsc();
    printf("Process id: %d\n", getpid());
    end = rdtsc();
    printf("Difference is : %llu\n", end - start);
}

// 4.3 GHZ max

/*

./a.out
Process id: 56743
Difference is : 206010

*/
