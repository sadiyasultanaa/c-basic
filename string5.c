//string length without strlen

#include<stdio.h>
int main()
{
    char s[]="asdfghjklall in one";
    int i=0,len=0;
    while(s[i]!='\0')
    {
        i++;
        len++;

    }
    printf("length = %d\n",len);




}
