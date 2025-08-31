#include<stdio.h>
int main()
{
    float height,weight,BMI;
    printf("enter your weight in kilogram=");
    scanf("%f",&weight);
    printf("enter your height in meter=");
    scanf("%f",&height);
    if (weight>0 && height>0)
    {
        BMI=weight/(height*height);
        printf("value of BMI is=%f",BMI);
        if (BMI<18.5)
        {
            printf("you are underweight.\n");
        }
        else if (BMI>=18.5 && BMI<24.9)
        {
            printf("you are healthy weight.");
        }
        else
        {
            printf("you are overweight.");
        }
    }
    else
    {
        printf("invalid input.");
    }
    return 0;
}
