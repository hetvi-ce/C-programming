#include<stdio.h>
void main()
{
    int user,comp,total=21;
    printf("this game include 21 matchsticks.\nat a time player have to choose 1 or 2 or 3 or 4 matchsticks.\nwho pic last matchstick is lose the game\n");
    x:
    printf("how many matchstick you want to choose(from 1 to 4)=");
    scanf("%d",&user);
    if (user>0 && user<5)
    {
        total=total-user;
        printf("you picked %d matchsticks.\n%d matchsticks left\n",user,total);
        comp=5-user;
        total=total-comp;
        printf("comp choose %d matchsticks.%d matchstick left.\n",comp,total);
    }
    else
    {
        printf("invalid input.");
    }
    if (total==1)
    {
        printf("you lose!!");
    }
    else
    {
        goto x;
    }
}
