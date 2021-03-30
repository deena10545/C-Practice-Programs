#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,a[50][50];
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&m,&n);
    printf("Enter the array elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Array rotation after 90 degree:\n");
     for(j=0;j<n;j++)
    {
        for(i=m-1;i>=0;i--)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Array rotation after 180 degree:\n");
     for(i=m-1;i>=0;i--)
    {
        for(j=n-1;j>=0;j--)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Array rotation after 270 degree:\n");
     for(j=n-1;j>=0;j--)
    {
        for(i=0;i<m;i++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    }

