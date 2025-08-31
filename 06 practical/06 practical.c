#include<stdio.h>
void main()
{
    float temp_cel,temp_feh;

    printf("Enter tempereture in celsius=");
    scanf("%f",&temp_cel);
    temp_feh=temp_cel*9/5+32;
    printf("temprature in fahrenheit %f",temp_feh);
}
