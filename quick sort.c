#include <stdio.h>
#include <stdlib.h>

void quicksort(int a[],int low, int high)
{
    int p,i,j;
    if(low<high)
    {
        p=low;
        i=low;
        j=high;
    while(i<j)
    {
        while(a[i]<=a[p] && i<high)
            i++;
        while(a[j]>=a[p] && j>low )
            j--;
        if(i<j)
        {
            a[i]=a[i]^a[j];
            a[j]=a[j]^a[i];
            a[i]=a[i]^a[j];
        }
    }
    a[p]=a[p]^a[j];
    a[j]=a[j]^a[p];
    a[p]=a[p]^a[j];
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
    }
}
int main()
{
    int n,a[50],i;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
