#include<stdio.h>
#include<unistd.h>
void main()
{
    int i,r,c;
    printf("enter tank's refill rate here=");
    scanf("%d",&r);
    printf("enter tank's capacity here=");
    scanf("%d",&c);
    for (i=r;i<=c;i=i+r)
    {
        printf("current water leval : %d Liter\n",i);
        if (i==c)
        {
            printf("Tank is Full!");
        }
        sleep(1);
    }
    if(r>c)
    {
        printf("invalid inputs.");
    }
}
