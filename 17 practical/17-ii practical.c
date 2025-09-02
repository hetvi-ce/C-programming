#include<stdio.h>
void main()
{
    int min=0;
    float dist=0.0,com_dist,dist_min;
    printf("enter distance of marathon=");
    scanf("%f",&com_dist);
    printf("enter distance covered by a minute=");
    scanf("%f",&dist_min);
    if (com_dist>0 && dist_min>0)
    {
        while (1)
        {
            min++;
            dist+=dist_min;
            printf("minute %2d : distance covered = %.1f km\n",min,dist);
            if (dist>=com_dist)
            {
                printf("marathon completed.\n");
                break;
            }
        }
    }
    else
    {
        printf("invalid inputs.");
    }
}
