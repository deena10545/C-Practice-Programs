//Bubble sorting
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*a,i,j;
    printf("Enter the no. of array elements:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(n));
    printf("Enter array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)

        {
            if(a[j]>a[j+1])
            {
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j+1]^a[j];
                a[j]=a[j]^a[j+1];
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    free(a);

}
