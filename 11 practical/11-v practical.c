#include<stdio.h>
void main()
{
    int ch;
    float marks;
    x:
    printf("Enter your marks =");
    scanf("%f",&marks);
    (marks>100)?printf("invalid input\n"):(marks>=90)?printf("grade A,CGPA=4,remark=outstanding\n"):
    (marks>=80)?printf("grade B,CGPA=3,remark=excellent\n"):(marks>=70)?printf("grade C,CGPA=2,remark=very good\n"):
    (marks>=60)?printf("grade D,CGPA=1,remark=good\n"):(marks<0)?printf("invalid input\n"):
    printf("grade F,CGPA=0,remark=needs improvement\n");
    printf("do you want to check again?\npress 1 if yes and press 0 if no.");
    scanf("%d",&ch);
    if (ch==1)
    {
        goto x;
    }
}
