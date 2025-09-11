#include<stdio.h>
void main()
{
    char seating[5][10];
    int i,j,n,row,seat;
    for (i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            seating[i][j]='O';
        }
    }
    printf("welcome to Theater seating arrangement system.\ntheater has 5 row and 10 seats in each row\n");
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
    for (i=0;i<5;i++)
    {
        printf("row %d :",i+1);
        for(j=0;j<10;j++)
        {
            printf("%c",seating[i][j]);
        }
        printf("\n");
    }
}
