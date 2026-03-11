/***#include<stdio.h>                           //Sum of individual rows and colums
int main()
{
    int i,j,a[3][3],sr,sc;
    printf("Enter array elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        sr=sc=0;
        for(j=0;j<3;j++)
        {
            sr=sr+a[i][j];
            sc=sc+a[j][i];
        }
        printf("SR=%d SC=%d",sr,sc);
        printf("\n");
    }
return 0;
}***/

/***#include<stdio.h>                   //sum of two matricess
int main()
{
    int i,j,a[2][3],b[2][3],sum[2][3];
    printf("Enter first array elements:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t",&a[i][j]);
        }
    }
    printf("Enter second array elements:\n");
    for(i=0;i<2;i++)

    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t",&b[i][j]);
        }
    }
    printf("First array elements are:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("second array elements are:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("sum of array elements are:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("The sum of matrix is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

return 0;
}***/

#include<stdio.h>               //matrix multiplication
int main()
{
    int i,j,r1,c1,k,r2,c2;
    printf("Enter number of 1st rows:");
    scanf("%d",&r1);
    printf("Enter number of 1st columns:");
    scanf("%d",&c1);

    printf("Enter number of 2nd rows:");
    scanf("%d",&r2);
    printf("Enter number of 2nd columns:");
    scanf("%d",&c2);
    int a[r1][c1],b[r2][c2],multi[r2][c2];
    printf("Enter elements of A matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of B matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    printf("Elements of A matrix is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Elements of B matrix is:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r1;k++)
        {
            multi[i][j]=a[i][k]*b[k][j];
        }
        }
    }
    printf("The matrix multiplication is:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
