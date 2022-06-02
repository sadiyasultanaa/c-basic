//array addition

   #include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,r,n;
    printf("enter r,n:");
    scanf("%d %d",&r,&n);
    printf("enter a matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("a[%d][%d] =",i,j);
            scanf("%d",&a[i][j]);
        }
         printf("\n");

    }

printf("enter b matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("b[%d][%d] =",i,j);
            scanf("%d",&b[i][j]);
        }
         printf("\n");

    }
    printf("print a matrix\n");
   for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);

        }
         printf("\n");

    }
    printf("print b matrix\n");
   for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",b[i][j]);

        }
         printf("\n");
    }

   for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]+b[i][j];

        }
         printf("\n");
    }

printf("a+b matrix\n");
   for(i=0;i<r;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("%d",c[i][j]);

        }
         printf("\n");
    }

    return 0;
}






