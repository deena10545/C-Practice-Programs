/*Alternate sorting: Given an array of integers, rearrange the array in such a way that the
first element is first max and sec element is first min.
eg. i/p: {1,2,3,4,5,6,7}, o/p:{7,1,6,2,5,3,4} */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,i;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    printf("Enter the array elements in sorted order:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int small=0,large=n-1;
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
            printf("%d ",a[small++]);
        else
            printf("%d ",a[large--]);
    }

}
