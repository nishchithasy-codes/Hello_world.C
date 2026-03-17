#include<stdio.h>
#include<math.h>
#include<conio.h>
#define PI 3.142
int main()
{
    int n,i;
    float deg,term=0,x,sum=0;

    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Enter the sine degree: ");
    scanf("%f",&deg);


    x=(deg*PI)/180;
    printf("In radians:%f\n",x);
    term=x;
    sum=term;

    for(i=3;i<=n;i+=2)
    {
        term=(-term*x*x)/(i*(i-1));
        sum=sum+term;
    }

    printf("Sin(%f)=%f\n",deg,sum);
    printf("Inbuilt function sin(%f)=%f\n",deg,term);
    getch();
    return 0;
}
