//copying array to another array
#include<stdio.h>
int main()

{
 int a1[50],n,i,a2[50];
 printf("how many numbers:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
    {
 scanf("%d",&a1[i]);

 }
 printf("array1:\n ");
 for(i=0;i<n;i++)
 {
     printf("%d\n",a1[i]);
 }
 for(i=0;i<n;i++)
 {
     a2[i]=a1[i];
 }
 printf("narray2:\n ");
 for(i=0;i<n;i++)
 {
     printf("%d\n",a2[i]);

 }
 return 0;


}
