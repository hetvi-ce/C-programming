#include<stdio.h>
void main()
{
    float temp_cel,temp_feh;
    int ch;
    printf("do you want to convert fehrenheit into celsius or celsius into fehrenheit.\n");
    printf("ipress 1 for convert fehrenheit into celsius and press 0 for convert celsius into fehrenheit.\n");
    scanf("%d",&ch);
    if (ch==0)
    {
        printf("Enter tempereture in celsius=");
        scanf("%f",&temp_cel);
        temp_feh=temp_cel*9/5+32;
        printf("temprature in fahrenheit %f",temp_feh);
    }
    else if (ch==1)
    {
        printf("enter tempreture in fehrenheit=");
        scanf("%f",&temp_feh);
        temp_cel=(temp_feh-32)*5/9;
        printf("tempreture in celsius %f",temp_feh);
    }
    else
    {
        printf("invalid input.");
    }
}
