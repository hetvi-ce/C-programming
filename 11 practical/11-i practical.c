#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks =");
    scanf("%d",&marks);
    (marks>100)?printf("invalid input\n"):(marks>=90)?printf("grade A,CGPA=4\n"):(marks>=80)?printf("grade B,CGPA=3\n"):
    (marks>=70)?printf("grade C,CGPA=2\n"):(marks>=60)?printf("grade D,CGPA=1\n"):(marks<0)?printf("invalid input\n"):printf("grade F,CGPA=0\n");
}
