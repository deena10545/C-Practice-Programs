//given an array of distinct elements and a number x, find if there is a pair with product equal to x...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[50],i,j,x,count=0;
    printf("Enter the no. of elements in the array");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the targeted element:");
    scanf("%d",&x);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]*a[j]==x)
                count++;
        }
    }
    if(count>0)
        printf("The pair product exists in the array");
    else
        printf("The pair product does not exist in the array");
}
