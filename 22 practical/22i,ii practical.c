#include<stdio.h>
void main()
{
    char seating[5][10];
    int i,j,n,row,seat,r,s;
    printf("enter Row number :");
    scanf("%d",&r);
    printf("enter Seat number in each row :");
    scanf("%d",&s);
    for (i=0;i<r;i++)
    {
        for(j=0;j<s;j++)
        {
            seating[i][j]='O';
        }
    }
    printf("welcome to Theater seating arrangement system.\ntheater has %d row and %d seats in each row\n",r,s);
    printf("Enter number of seats you want to reserve:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter row and seat number for reserve seat %d :",i+1);
        scanf("%d %d",&row,&seat);

        if (row>0 && row<=5 && seat>0 && seat<=10)
        {
            seating[row-1][seat-1]='X';
        }
        else
        {
            printf("Enter a valid row or seat number.\n");
            i--;
        }
    }
    printf("\nseating chart:\n");
    for (i=0;i<r;i++)
    {
        printf("row %d :",i+1);
        for(j=0;j<s;j++)
        {
            printf("%c",seating[i][j]);
        }
        printf("\n");
    }
    printf("\nnumber of seats reserved by you is %d and now available seats are %d.\n",n,(r*s)-n);
}
