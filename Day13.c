#include<stdio.h>
int main()
{
    char FirstName[50],LastName[50],FullName[100];
    int i,j,length;
    printf("Enter first name: ");
    scanf("%s",FirstName);
    getchar();
    printf("Enter last name: ");
    fgets(LastName,sizeof(LastName),stdin);
    i=0;
    while(LastName[i]!='\0')
    {
        if(LastName[i]=='\n')
        {
            LastName[i]='\0';
            break;
        }
        i++;
    }
    j=0;
    i=0;
    while(FirstName[i]!='\0')
    {
        FullName[j]=FirstName[i];
        i++;
        j++;
    }
    FullName[j++]=' ';
     i=0;
    while(LastName[i]!='\0')
    {
        FullName[j++]=LastName[i++];
    }
    FullName[j]='\0';
    length=0;
    while(FullName[length]!='\0')
    {
        length++;
    }
    printf("FullName %s \n",FullName);
    printf("length of full name:%d\n",length);
    if(length>20)
    {
        printf("Warning!:name exeeds screen limit\n");
    }
    return 0;
}
