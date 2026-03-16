#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number of students: \n");
    scanf("%d",&n);
    int scores[n];
    printf("Enter %d students scores:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&scores[i]);
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            int temp;
            if(scores[j]<scores[j+1])
            {
                int temp;
                temp=scores[j];
                scores[j]=scores[j+1];
                scores[j+1]=temp;
            }
        }
    }

    printf("Scores in decending order:\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d\n",scores[i]);
    }
    printf("\n");
    getch();
    return 0;
}
