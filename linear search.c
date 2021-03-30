#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, *a,i,t;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(n));
    printf("Enter the array elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element:");
    scanf("%d",&t);
    int flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==t)
            flag++;
    }
    if(flag>0)
        printf("The element %d is present",t);
    else
        printf("The element %d is not present",t);
    free(a);
}
