#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[50],i,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        if(i!=min)
        {
            a[i]=a[i]^a[min];
            a[min]=a[min]^a[i];
            a[i]=a[i]^a[min];
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
