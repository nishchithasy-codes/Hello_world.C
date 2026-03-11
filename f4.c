#include<stdio.h>
int main()
{
    char firstname[30],lastname[30],fullname[100];
    int i,j;
    printf("Enter first name: ");
    scanf("%s",&firstname);
    printf("Enter last name: ");
    scanf("%s",&lastname);

    i=0;
    while(firstname[i]!='\0')
    {
        fullname[i]=firstname[i];
        i++;
    }
    fullname[i]=' ';
    i++;

    j=0;
    while(lastname[j]!='\0')
    {
        fullname[i]=lastname[j];
        i++;
        j++;
    }
    fullname[i]='\0';

    int length=0;
    while(fullname[length]!='\0')
    {
        length++;
    }

    printf("Full name is %s\n",fullname);
    printf("Length of full name is %d\n",length);
    if(length>20)
    {
        printf("WARNING!! Name exceeds the screen limit");
    }
    return 0;




}
