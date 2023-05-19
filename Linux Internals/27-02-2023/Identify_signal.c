// alaram signal  
// "\n" is important for termination 

#include<signal.h>
#include<stdio.h>
#include<unistd.h>

void sighand(int signum){
    if (signum == SIGINT)// checking that only ctrl c is pressed
    {
        printf("you have press control c\n");
    }
}
int  main()
{
    signal(SIGINT,sighand);
    alarm(3);
    while (1);
    return 0;
}
