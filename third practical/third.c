#include<stdio.h>
#include<math.h>
int main()
{
    float weight,height,BMI;
    printf("enter your weight in kilogram =");
    scanf("%f",&weight);
    printf("enter your height in meter=");
    scanf("%f",&height);
    if(weight>0 & height>0)
    {
        BMI=weight/pow(height,2);
        if(BMI<18.5)
        {
           printf("you are underweight.");
        }
        else if(BMI>18.5 & BMI<24.9)
        {
            printf("you are healthy weight.");
        }
        else
        {
            printf("you are over weight.");
        }

    }
    else
    {
        printf("invalid input");
        return 0;
    }
    printf("value of BMI is =%.2f",BMI);
    return 0;
}
