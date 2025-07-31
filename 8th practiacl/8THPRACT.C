#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("enter your age=");
	scanf("%d",&age);
	(age>18)?printf("you are eligible."):printf("you are not eligible.");
	getch();
}