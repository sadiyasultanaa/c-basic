//concat without library
#include<stdio.h>
int main()
{
    char a[50]="sadia";
    char b[]="sultana";
    int i=0,len=0,j=0;
    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    while(b[j]!='\0')
    {
        a[len+j]=b[j];
        j++;
    }
    printf("a=%s",a);
}
