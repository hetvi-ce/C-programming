#include<stdio.h>
void main()
{
    int s_ver,s_hor,i,j;
    printf("enter size of the table varticaly=");
    scanf("%d",&s_ver);
    printf("enter size of the table horizontaly =");
    scanf("%d",&s_hor);
    for (i=1;i<=s_ver;i++)
    {
        for (j=1;j<=s_hor;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
}
