#include<stdio.h>
void main()
{
    int min=0;
    float dist=0.0,com_dist;
    printf("enter distance of marathon=");
    scanf("%f",&com_dist);
    while (1)
    {
        min++;
        dist+=0.5;
        printf("minute %2d : distance covered = %.1f km\n",min,dist);
        if (dist==com_dist)
        {
            printf("marathon completed.\n");
            break;
        }
    }
}
