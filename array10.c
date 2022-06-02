//matrix
#include<stdio.h>
int main()
{
    int a[3][4],b[3][4];
    int i,j;
    printf("enter a matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
         printf("\n");

    }

printf("enter b matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("b[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
         printf("\n");

    }
    printf("print a matrix\n");
   for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",a[i][j]);

        }
         printf("\n");

    }
    printf("print b matrix\n");
   for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",b[i][j]);

        }
         printf("\n");
    }

    return 0;
}
