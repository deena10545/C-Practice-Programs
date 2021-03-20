#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,a[50][50];
    printf("Enter the row and column:");
    scanf(" %d %d",&m,&n);
    printf("Enter array elements:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    printf("\nSpiral Matrix :");
    int k = 0, l = 0;
    while(k < m && l < n)
    {
        for(i = l; i < n; i++)
        {
        printf("%d ",a[k][i]);
        }
        k++;
        for(i = k; i < m; i++)
        {
        printf("%d ",a[i][n-1]);
        }
        n--;
        if(k < m)
        {
            for(i=n-1; i >= l;i--)
            {
            printf("%d ",a[m-1][i]);
            }
            m--;
        }
        if(l < n)
        {
            for(i = m-1; i >=k;i--)
            {
            printf("%d ",a[i][l]);
            }
            l++;
        }
    }
return 0;
}
