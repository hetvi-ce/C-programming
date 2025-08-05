#include<stdio.h>
void main()
{
    float marks;
    printf("enter your marks=");
    scanf("%f",&marks);
    (marks>=90)?printf("grade A, CGPA=4 ,OUTSTANDING"):(marks>=80)?printf("grade B, CGPA=3, EXECELLENT")
    :(marks>=70)?printf("grade C, CGPA=2 ,VERY GOOD"):(marks>=60)? printf("grade D, CGPA=1, GOOD"):printf("grade FAIL , NEED IMPROVEMENT");
}
