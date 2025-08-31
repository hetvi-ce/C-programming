#include<stdio.h>
void main()
{
    float temp_cel,temp_feh,temp_kel;
    int ich,och;
    printf("your input is in which unit?? \n press 1 for celsius,press 2 for kelvin,press 3 for fehrenheit.\n");
    scanf("%d",&ich);
    printf("in which unit you want your output??\n press 4 for celsius,press 5 for kelvin, press 6 for fehrenheit.");
    scanf("%d",&och);
    if (ich==1 && och==6)
    {
        printf("Enter tempereture in celsius=");
        scanf("%f",&temp_cel);
        temp_feh=temp_cel*9/5+32;
        printf("temprature in fahrenheit %f",temp_feh);
    }
    else if (ich==3 && och==4)
    {
        printf("enter tempreture in fehrenheit=");
        scanf("%f",&temp_feh);
        temp_cel=(temp_feh-32)*5/9;
        printf("tempreture in celsius %f",temp_feh);
    }
    else if (ich==1 && och==5)
    {
        printf("Enter tempreture in celsius=");
        scanf("%f",&temp_cel);
        temp_kel=temp_cel+273.15;
        printf("tempreture in kelvin %f",temp_kel);
    }
     else if (ich==2 && och==4)
    {
        printf("Enter tempreture in kelvin=");
        scanf("%f",&temp_kel);
        temp_cel=temp_kel-273.15;
        printf("tempreture in celsius %f",temp_cel);
    }
     else if (ich==3 && och==5)
    {
        printf("Enter tempreture in fehrenheit =");
        scanf("%f",&temp_feh);
        temp_kel=((temp_feh-32)*5/9)+273.15;
        printf("tempreture in kelvin %f",temp_kel);
    }
     else if (ich==2 && och==6)
    {
        printf("Enter tempreture in kelvin =");
        scanf("%f",&temp_kel);
        temp_feh=(temp_kel-273.15)*9/5+32;
        printf("tempreture in fehrenheit %f",temp_feh);
    }
    else
    {
        printf("invalid input.");
    }
}
