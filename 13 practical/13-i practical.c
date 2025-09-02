#include<stdio.h>
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
    }
    if(r>c)
    {
        printf("invalid inputs.");
    }
}
