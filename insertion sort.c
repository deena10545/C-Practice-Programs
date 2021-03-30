#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,key=0,j;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

