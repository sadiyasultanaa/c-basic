//wap that display sum and avg
#include<stdio.h>
int main()

{
 int num[100],sum=0,i,n;
 printf("enter numbers:\n");
 scanf("%d",&n);
 for(i=0; i<n; i++)
    scanf("%d",&num[i]);


 for(i=0;i<n;i++)
 {
     sum=sum+num[i];
 }
 printf("the sum is %d\n",sum);
 printf("the number is:%.2f\n",(float)sum/n);
 return 0;
}
