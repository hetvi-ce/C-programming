#include<stdio.h>
void main()
{
    int s_ver,s_hor,i,j;
    printf("enter size of the table varticaly=");
    scanf("%d",&s_ver);
    printf("enter size of the table horizontaly =");
    scanf("%d",&s_hor);
    for (i=s_ver;i>=1;i--)
    {
        for (j=s_hor;j>=1;j--)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
}
