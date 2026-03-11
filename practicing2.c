/***#include<stdio.h>
int main()
{
    int i,a[10],even=0,odd=0;

    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    if(a[i]%2==0)
    even++;
    else
    odd++;
    }
    printf("The count of even numbers are:%d\n",even);
    printf("The count of odd numbers are:%d",odd);
    return 0;



}***/

/***#include<stdio.h>
int main()
{
    int i,a[5],b[5],sum[5];

    printf("Enter first array elements:");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    printf("Enter second array elements:");
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    for(i=0;i<5;i++)
        {sum[i]=a[i]+b[i];
    printf("The sum of both elements at the index %d is %d\n",i,sum[i]);}
    return 0;


}***/

#include<stdio.h>
int main()
{
    int i,j,r1,c1,sum=0;
    printf("Enter how many rows:");
    scanf("%d",&r1);
    printf("Enter how many columns:");
    scanf("%d",&c1);
    int a[r1][c1];
    printf("Enter the array elements: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
            sum=sum+a[i][j];
        }
        printf("\n");
    }
     printf("Sum= %d",sum);
    return 0;





}
