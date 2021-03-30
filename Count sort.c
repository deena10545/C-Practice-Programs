#include <stdio.h>
#include <stdlib.h>

int main()   //Applicable only for positive numbers bcoz array index starts from 0...
{
    int n,i,j,a[50];
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter array elements:");
    int max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>=max)
            max=a[i];
    }
    int t[max+1];
    for(i=0;i<max+1;i++)
        t[i]=0;
    for(i=0;i<n;i++)
    {
     t[a[i]]++;
    }
    for(i=0;i<max+1;i++)
    {
        for(j=t[i];j>0;j--)
            printf("%d ",i);
    }
}
