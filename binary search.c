#include <stdio.h>
#include <stdlib.h>
int find(int a[], int low, int high, int t)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==t)
            return 1;
        else if(a[mid]<t)
             return find(a,mid+1,high,t);
        else if(a[mid]>t)
             return find(a,low,mid-1,t);
    }
    return 0;

}
int main()
{
    int n, *a,i,t;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(n));
    printf("Enter the array elements:");  //Enter the elements in sorted order....
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the search element:");
    scanf("%d",&t);
    int res=find(a,0,n-1,t);
    if(res==1)
        printf("The element is present");
    else
        printf("The element is not present");
    free(a);
}
