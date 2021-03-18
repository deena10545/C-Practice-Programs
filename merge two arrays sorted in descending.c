#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],b[50],c[100],m,n,i,j;
    printf("Enter the no. of elements in array1:");
    scanf("%d",&m);
    printf("Enter the array 1 elements:");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of elements in array2:");
    scanf("%d",&n);
    printf("Enter the array 2 elements:");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<m+n;j++)
    {
        c[i]=b[j];
        i++;
    }
    for(i=0;i<(m+n)-1;i++)
    {
        for(j=i+1;j<m+n;j++)
        {
            if(c[i]<c[j])
            {
                c[i]=c[i]^c[j];
                c[j]=c[j]^c[i];
                c[i]=c[i]^c[j];
            }
        }
    }
    for(i=0;i<m+n;i++)
        printf("%d ",c[i]);
}
