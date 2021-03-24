//Given an array of distinct elements.. the task is to find triplets in the array whose sum is zero..
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,a[50],i,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("The array elements whose sum is zero:\n");
    int sum=0;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]^a[j];
                a[j]=a[j]^a[i];
                a[i]=a[i]^a[j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        int l=i+1,r=n-1,x=a[i];
        while(l<r)
        {
            if(x+a[l]+a[r]==sum)
            {
                printf(" %d %d %d\n",x ,a[l],a[r]);
                l++;
                r--;
            }
            else if(x+a[l]+a[r]<sum)
                l++;
            else
                r--;
        }
    }

}
