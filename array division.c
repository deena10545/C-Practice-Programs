//Given an array A, divide it into two arrays  say B and C, such that the sum of elements in array B is greater than or equal
// to the sum of elements in array c and array B should have min no. of elements...
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,a[50],i,j;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int leftsum=0,rightsum=0,count=0;
    for(i=0;i<n;i++)
    {
        leftsum+=a[i];
        rightsum=0;
        count=0;
        for(j=i+1;j<n;j++)
        {
            rightsum+=a[j];
            count++;
        }
        if(leftsum>=rightsum)
        {
            if(count>i)
            {
                break;
            }
            else
            {
                printf("Division is not possible");
                return;
            }
        }
    }
    printf("The array of B is:\n");
    for(j=0;j<n;j++)
    {
        if(j==i+1)
            printf("\nThe array of C is:\n");
        printf("%d ",a[j]);
    }
}
