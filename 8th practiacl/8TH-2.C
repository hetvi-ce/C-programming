#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	char ch;
	clrscr();
	x:printf("enter your age=");
	scanf("%d",&age);
	(age<18)?printf("you are not eligible."):printf("you are eligible.");
	printf("if you want to check eligiblity for another person prss 'y'.\n otherwise press n.");
	flushall();
	scanf("%c",&ch);
	if (ch=='y')
	{
		goto x;
	}
	getch();
}



