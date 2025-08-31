#include<stdio.h>
int main()
{
    float length,breadth,area,perimeter;
    float fencingrate,fencingcost,grassrate,grasscost;
    printf("Enter the length of the park is=");
    scanf("%f",&length);
    printf("Enter the breadth of the park is=");
    scanf("%f",&breadth);

    if (length>0 && breadth>0)
    {
        area=length*breadth;
        printf("\nthe area of the park is =%f\n",area);
        perimeter=2*(length+breadth);
        printf("the perimeter of the park is %f\n",perimeter);

        printf("Enter fencing rate=");
        scanf("%f",&fencingrate);
        printf("Enter grass laying rate=");
        scanf("%f",&grassrate);

        if (fencingrate>0 && grassrate>0)
        {
            fencingcost=fencingrate*perimeter;
            printf("the cost for fencing is %f",fencingcost);
            grasscost=grassrate*area;
            printf("\nthe cost for grass leying is %f",grasscost);
        }
    }
    else
    {
            printf("invalid input");
    }
    return 0;

}
