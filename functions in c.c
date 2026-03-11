/***#include<stdio.h>

int jumble(int x,int y)
{
    x=2*x+y;
}

int main()
{
 int x=2,y=5;
 y=jumble(y,x);             //y value becomes change here onwards
 x=jumble(y,x);
 printf("x=%d",x);

}***/

/***#include<stdio.h>
int incr(int i)
{
    static int count=0;
    count=count+i;
    return (count);
}
int main()
{
    int i,j,count;
    for(i=0;i<=4;i++)
        j=incr(i);
    printf("Value of j=%d",j);
    return 0;

}***/

/***#include<stdio.h>
int func(int *p,int m)
{
    m=m+5;
    *p=*p+m;
    return 0;
}
int main()
{
  int i=5,j=10;
  func(&i,j);
  printf("%d\n",i+j);
}***/

/***#include<stdio.h>
int main()
{
    int marks[5]={10,20,30,40,50},size;
    size=sizeof (marks)/(sizeof (marks[0]));
    float average=0;
    average=avg(marks,size);
    printf("Average= %f\n",average);
    printf("Inside a main fuction the size of an array is: %d\n",sizeof(marks));
}
int avg(int marks1[],int size)
{
    int i,sum=0;
    float average=0;
    for(i=0;i<size;i++)
        sum=sum+marks1[i];
    average=sum/size;
    printf("Inside a average function size of an array is: %d\n",sizeof(marks1));
    return average;
}***/

#include<stdio.h>                   //Return a string from a function............................................
char* display();
void main()
{
    char *str;
    str=display();
    printf("The string is %s",str);
}
char* display()
{
    return "Appu";

}
