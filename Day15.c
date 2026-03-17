#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,d;
    printf("Enter the values of x1 and y1:");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter the values of x2 and y2:");
    scanf("%lf %lf",&x2,&y2);

    d = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("straight line distance is: %lf\n",d);
    getch();
    return 0;

}
