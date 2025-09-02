#include<stdio.h>
void main()
{
    int min;
    float dist;
    while (1)
    {
        min++;
        dist+=0.5;
        printf("minute %2d : distance covered = %.1f km\n",min,dist);
        if (dist==10)
        {
            printf("marathon completed.\n");
            break;
        }
    }
}
