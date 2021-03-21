#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i;
    printf("enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int left=0,right=n-1;
    while(left<right)
    {
        if(a[left]==0)
            left++;
        else if(a[right]==1)
            right--;
        else
            a[left]=a[left]^a[right];
            a[right]=a[right]^a[left];
            a[left]=a[left]^a[right];
            left++;
            right--;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
return 0;
}
