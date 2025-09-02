#include<stdio.h>
void main()
{
    int i,j,s;
    int n=5;
    char ch='A';
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
            {
                if (j%2==0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
            printf("\n");
    }
    printf("\n\n\n");
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if (i==1 || i==j)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        for(j=1;j<=4;j++)
        {
            if(i==5-j)
            {
                printf("%d",5+j);
            }
            else if (i==1)
            {
                printf("%d",5+j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n\n\n");
    for(i=1;i<=5;i++)
    {
        for (s=1;s<i;s++)
        {
            printf(" ");
        }
        for(j=i;j<=5;j++)
        {
            printf("%d",6-j);
        }
        for(j=4;j>=i;j--)
        {
            printf("%d",6-j);
        }
        printf("\n");
    }
    for (i=2;i<=5;i++)
    {
        for (s=0;s<5-i;s++)
        {
            printf(" ");
        }
        for (j=i;j>=1;j--)
        {
            printf("%d",j);
        }

        for (j=2;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    printf("\n\n\n");
    for (i=1;i<=n-1;i++)
        {
        for (j=1;j<=n-1-i;j++)
        {
            printf(" ");
        }
        for (j=0;j<i;j++)
        {
            printf("%c",'A'+j);
        }
        for (j=i-2;j>=0;j--)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    for (i=n-2;i>=1;i--)
    {
        for (j=1;j<=n-1-i;j++)
        {
            printf(" ");
        }
        for (j=0;j<i;j++)
        {
            printf("%c",'A'+j);
        }
        for (j=i-2;j>=0;j--)
        {
            printf("%c",'A'+j);
        }
        printf("\n");
    }
}
