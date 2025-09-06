#include<stdio.h>
void main()
{
    int arr[20],n,i,esum,asum=0;
    printf("enter number of total id:");
    scanf("%d",&n);
    for (i=0;i<n-1;i++)
    {
        printf("enter id number:");
        scanf("%d",&arr[i]);
        asum=asum+arr[i];
    }
    esum=n*(n+1)/2;
    printf("missing id number is %d\n",esum-asum);
}

