#include<stdio.h>
#include<stdlib.h>

int main()
{
    int gm,cm;

    printf("\t\t\t***************ROCK PAPER SCISSOR***************\n");

    while(1)
    {
        printf("\nEnter\n\n \t0 for rock\t 1 for paper\t 2 for scissor\t 5 for exit:\n");
        scanf("%i",&gm);

        cm=rand()%3;

        if(gm==5)
        {
            exit(1);
        }
        else if(gm==0 && cm==1)
        {
            printf("Oops!!! you lost");
        }

        else if(gm==0 && cm==2)
        {
            printf("You won");
        }

        else if(gm==1 && cm==0)
        {
            printf("You won");
        }

        else if(gm==1 && cm==2)
        {
            printf("Oops!!! you lost");
        }

        else if(gm==2 && cm==0)
        {
            printf("Oops!!! you lost");
        }

        else if(gm==2 && cm==1)
        {
            printf("You won");
        }
        else
        {
            printf("it's a draw");
        }
    }

return 0;
}
