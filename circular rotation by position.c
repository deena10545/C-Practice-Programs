//Circular rotation of array by k positions...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,k;
    printf("Enter the array elements:");
    scanf("%d",&n);
    printf("Enter the no. of elements in array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of rotation:");
    scanf("%d",&k);
    printf("The array after rotation:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[(n+i-k)%n]);
    }

}
