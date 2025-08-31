#include<stdio.h>
void main()
{
    int age,ch;
    x:
    printf("Enter your age=");
    scanf("%d",&age);
    if (age>0 && age<18)
    {
        printf("sorry.\nyou are not eligible to open a saving account yet.\n");
    }
    else if (age>18 && age<60)
    {
        printf("you are eligible to open a saving account.\n");
    }
    else if(age>60 && age<120)
    {
        printf("you are eligible for senior citizon account.\n");
    }
    else
    {
        printf("invalid input please enter valid age.\n");
        goto x;
    }
    y:
    printf("if you want to check again or exit?\nfor check again press 1 and for exit press 0\n");
    scanf("%d",&ch);
    if (ch==1)
    {
        goto x;
    }
    else if (ch==0)
    {
        printf("thankyou.");
    }
    else
    {
        printf("invalid input.");
        goto y;
    }
}
