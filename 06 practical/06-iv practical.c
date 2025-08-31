#include<stdio.h>
void main()
{
    float temp_kel;
    int i,j,temp_feh;

   printf("-20 to 100 celsius into fehrenheit and kelvin\n\n");
   printf("celsius  fehrenheit  kelvin   type\n");
   for (i=-20;i<=100;i++)
   {
       for (j=1;j<=3;j++)
       {
           if (j==1)
           {
               printf("%5d  ",i);
           }
           else if (j==2)
           {
                temp_feh=i*9/5+32;
                printf("%7d.00  ",temp_feh);
           }
           else
           {
               temp_kel=i+273.15;
               printf("  %.2f",temp_kel);
           }
       }
       if (i<=0)
       {
           printf("   cold");
       }
        else if (i>0 && i<=40)
        {
            printf("   medium");
        }
        else
        {
            printf("   hot");
        }
       printf("\n");
   }

}
