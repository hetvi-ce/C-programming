#include<stdio.h>
void main()
{
    int y,x,i,z,w;
    printf("enter range for book id first starting range and then ending range=",x,y);
    scanf("%d %d",&x ,&y);
    printf("enter which book you want to lebal as special edition? enter here=");
    scanf("%d",&z);
    printf("enter which book you want to lebal as rare edition? enter here=");
    scanf("%d",&w);
    for (i=x;i<=y;i++)
    {
            printf("Book ID : %d",i);
            if (i%z==0)
            {
                printf(" (SPECIAL EDITION)");
            }
            if (i%w==0)
            {
                printf(" (RARE EDITION)");
            }
             printf("\n");
    }
    if (x>y)
    {
        printf("invalid range.");
    }
    if (x>z && z>y)
    {
        printf("invalid number entered.");
    }

}
