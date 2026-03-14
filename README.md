# Hello_world.C
This repository contains multiple practice problems in c to strengthen programming and logical skills.
#include<stdio.h>
int main()
{
    int length=0,i=0,j=0;
    char firstname[50],lastname[50],fullname[100];
    printf("Enter first name: \n");
    scanf("%s",firstname);
    printf("Enter last name:\n");
    scanf("%s",lastname);

    while(firstname[i]!='\0')
    {

        fullname[i]=firstname[i];
        i++;
    }
    fullname[i]=' ';
    i++;

    while(lastname[j]!='\0')
    {
        fullname[i]=lastname[j];
        i++;
        j++;
    }
    fullname[i]='\0';

    while(fullname[length]!='\0')
    {
        length++;
    }

    if(length>20)
    {
        printf("WARING!!! :Name exceeds the screen limit.\n");
    }
    if(length<=20)
    {
    printf("Full name is %s\n",fullname);
    printf("Length of full name is %d\n",length);
    }

    return 0;
}
