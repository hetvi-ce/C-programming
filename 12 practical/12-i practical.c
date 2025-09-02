#include<stdio.h>
void main()
{
    int y,x,i;
    printf("enter range for book id first starting range and then ending range=",x,y);
    scanf("%d %d",&x ,&y);
    for (i=x;i<=y;i++)
    {
            printf("Book ID : %d",i);
            if (i%5==0)
            {
                printf("(SPECIAL EDITION)");
            }
            printf("\n");
    }
    if (x>y)
    {
        printf("invalid range.");
    }
}
