#include<stdio.h>
void main()
{
    int arr[25];
    int cp=0,cn=0,codd=0,ceven=0,i;
    printf("enter 25 numbers here:\n");
    for (i=0;i<25;i++)
    {
        printf("enter number %d :",i+1);
        scanf("%d",&arr[i]);
    }
    for (i=0;i<25;i++)
    {
        if(arr[i]>=0)
        {
            cp++;
        }
        if(arr[i]<0)
        {
            cn++;
        }
        if (arr[i]%2==0)
        {
            ceven++;
        }
        if (arr[i]%2!=0)
        {
            codd++;
        }
    }
    printf("Total number of positive numbers is %d.\n",cp);
    printf("Total number of negative numbers is %d.\n",cn);
    printf("Total number of odd numbers is %d.\n",codd);
    printf("Total number of even numbers is %d.\n",ceven);
}
