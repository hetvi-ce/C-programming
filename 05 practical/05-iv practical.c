#include<stdio.h>
void main()
{
    float w,m,pm,ilm,ilw,llm,lw,lm;
    long double p;
    float ol,lrm,lrw,pw;

    printf("Enter value of total population=");
    scanf("%lf",&p);
    printf("Enter value of overall literacy rate =");
    scanf("%f",&ol);
    printf("Enter value of literacy rate of men =");
    scanf("%f",&lrm);
    printf("value of literacy rate of women =%f",100-lrm);
    printf("\nEnter value of total percentage of women =");
    scanf("%f",&pw);


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

}

