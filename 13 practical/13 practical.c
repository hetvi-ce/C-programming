#include<stdio.h>
void main()
{
    int i;
    for (i=10;i<=100;i=i+10)
    {
        printf("current water leval : %d Liter\n",i);
        if (i==100)
        {
            printf("Tank is Full!");
        }
    }
}
