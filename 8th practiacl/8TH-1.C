#include<stdio.h>
void main()
{
	int age;
	clrscr();
	printf("enter your age=");
	scanf("%d",&age);
	if (age<18)
	{
		printf("you are not eligible.");
	}
	else if(age<59)
	{
		printf("you are eligible for regular account.");
	}
	else
	{
		printf("you are eligible for senior citizen account.");
	}
	getch();
}