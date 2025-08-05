#include<stdio.h>
void main()
{
    float marks;
    printf("enter your marks=");
    scanf("%f",&marks);
    (marks>=90)?printf("grade A"):(marks>=80)?printf("grade B")
    :(marks>=70)?printf("grade C"):(marks>=60)? printf("grade D"):printf("grade F");
}
