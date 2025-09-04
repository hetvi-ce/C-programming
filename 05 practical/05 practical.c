#include<stdio.h>
void main()
{
    float w,m,pm,ilm,ilw,llm,lw,lm;
    long double p=1441981744;
    float ol=85.95;
    float lrm=80.95;
    float lrw=62.84;
    float pw=48.4;

    w=pw*p/100;
    m=p-w;

    lm=lrm*m/100;
    lw=lrw*w/100;

    ilm=m-lm;
    ilw=w-lw;

    printf("number of illiterate men is %.0f \n",ilm);
    printf("number of illiterate women id %.0f",ilw);
}

