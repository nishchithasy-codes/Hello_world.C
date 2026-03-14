#include<stdio.h>
int main()
{
    float x,y;
    printf("Enter the value of radius:\n");
    scanf("%f",&x);
    y = 3.14*x*x;
    printf("%f is the area of circle",y);
    getch();
    return 0;
}
