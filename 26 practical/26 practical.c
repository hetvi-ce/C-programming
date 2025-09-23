#include<stdio.h>
#include<math.h>
int validatetriangle(int a,int b,int c)
{
    if (a+b>c && b+c>a && a+c>b)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return;
}
float calculatearea(int a, int b, int c)
{
    float s,area;
    s=(a+b+c)/2.0;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main()
{
    int a,b,c;
    float area;
    printf("enter lengths of triangle:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Valid triangle:");
    validatetriangle(a,b,c);
    printf("Area : %.2f ", calculatearea(a,b,c));
}
