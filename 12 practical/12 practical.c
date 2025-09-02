#include<stdio.h>
void main()
{
    int i;
    for (i=1;i<=50;i++)
    {
        printf("Book ID : %d",i);
        if (i%5==0)
        {
            printf("(SPECIAL EDITION)");
        }
        printf("\n");
    }
}
