//program to find the second largest element in the array....
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max=0,max1=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max1=max;
            max=a[i];
        }
        else if(a[i]>=max1 && a[i]<=max)
        {
            max1=a[i];
        }
    }
    printf("The second largest element is %d",max1);
}
