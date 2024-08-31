/*

Name : Nakul Siwach
Roll No : MT2024096
Program : 29. Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).

*/

#include <stdio.h>
#include <sched.h>
#include <unistd.h>

int main(){

    int pid = getpid();

    int sched_policy = sched_getscheduler(pid);

    if (sched_policy == -1) perror("error\n");
    else
    {
        switch (sched_policy)
        {
		case SCHED_RR:
            printf("Current scheduling policy: SCHED_RR \n");
            break;
        case SCHED_FIFO:
            printf("Current scheduling policy: SCHED_FIFO\n");
            break;
        case SCHED_OTHER:
            printf("Current scheduling policy: SCHED_OTHER \n");
            break;
        
        default:
            break;
        }
    }
    int x;
    printf("To change scheduling policy select\n1:SCHED_FIFO\n2:SCHED_RR\n3:SCHED_OTHER\n");
    scanf("%d", &x);
    struct sched_param s;
    switch (x)
    {
    case 1:
        s.sched_priority = 99;
        sched_setscheduler(pid, SCHED_FIFO, &s);
        break;
    case 2:
        s.sched_priority = 99;
        sched_setscheduler(pid, SCHED_RR, &s);
        break;
    case 3:
        s.sched_priority = 0;
        sched_setscheduler(pid, SCHED_OTHER, &s);
        break;
    default:
        perror("invalid option");
        break;
    }

    sched_policy = sched_getscheduler(pid);
    if (sched_policy == -1)
    {
        perror("error\n");
    }
    else
    {
        switch (sched_policy)
        {
        case SCHED_FIFO:
            printf("Current scheduling policy: SCHED_FIFO\n");
            break;
        case SCHED_OTHER:
            printf("Current scheduling policy: SCHED_OTHER \n");
            break;
        case SCHED_RR:
            printf("Current scheduling policy: SCHED_RR \n");
            break;
        default:
            break;
        }
    }

    return 0;
}

/*

./a.out
Current scheduling policy: SCHED_OTHER 
To change scheduling policy select
1:SCHED_FIFO
2:SCHED_RR
3:SCHED_OTHER
1
Current scheduling policy: SCHED_OTHER 
*/