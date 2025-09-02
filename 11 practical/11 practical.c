#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks =");
    scanf("%d",&marks);
    (marks>100)?printf("invalid input\n"):(marks>=90)?printf("grade A\n"):(marks>=80)?printf("grade B\n"):
    (marks>=70)?printf("grade C\n"):(marks>=60)?printf("grade D\n"):(marks<0)?printf("invalid input\n"):printf("grade F\n");
}
