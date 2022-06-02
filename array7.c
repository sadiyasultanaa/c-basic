//linear search in arrayy
#include<stdio.h>
int main()

{
 int num[]={10,15,20,30,25,50};
 int value,pos=-1,i;

 printf("enter search value:");
 scanf("%d",&value);
 for(i=0; i<6; i++)

        if(value==num[i])
        {
              pos=i+1;
        break;

        }

    if(pos==-1)
    {
        printf("not found\n");
    }
    else
        printf("the %d value is at %d",value,pos);
    return 0;
}

