#include <stdio.h>
#include <stdlib.h>
void merge(int a[], int low, int mid, int high)
{
    int i,j,k;
    int n1=mid-low+1, n2=high-mid;
    int x[n1],y[n2];
    for(i=0;i<n1;i++)
        x[i]=a[low+i];
    for(j=0;j<n2;j++)
        y[j]=a[mid+1+j];
    i=0,j=0,k=low;
    while(i<n1 && j<n2)
    {
        if(x[i]<=y[j])
        {
            a[k]=x[i++];
        }
        else
        {
            a[k]=y[j++];
        }
        k++;
    }
    while(i<n1)
        a[k++]=x[i++];
    while(j<n2)
        a[k++]=y[j++];

}
void mergesort(int a[],int low, int high)
{
    if(low<high)
    {
        int mid=(low+(high-1))/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
    else
        return;
}

int main()
{
    int n,a[50],i;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    printf("Merge sort elements:\n");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
