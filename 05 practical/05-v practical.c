#include<stdio.h>
void main()
{
    float w,m,pm,ilm,ilw,llm,lw,lm;
    long double p=1441981744;
    float ol=85.95;
    float lrm=80.95;
    float lrw=62.84+(5*lrw)/100;
    float pw=48.4;

    w=pw*p/100;
    m=p-w;

    lm=lrm*m/100;
    lw=lrw*w/100;

    ilm=m-lm;
    ilw=w-lw;

    printf("number of illiterate men is %.1f \n",ilm);
    printf("number of illiterate women is %.1f \n",ilw);

    printf("literate population men=%.1f \n",lm);
    printf("literate population women=%.1f \n",lw);
    printf("total literate population=%.1f \n",lm+lw);

    printf("literacy gap between both gender is %.1f \n",lm-lw);
    printf("number of literate men is greater then number of literate women.\n");
}

