/*Find the union,intersection of two list and also find except(Remove even elements
from list 1 and odd elements from list 2)
i/p: list 1: 1,3,4,5,6,8,9
list 2: 1,5,8,9,2
union: 1,3,4,5,6,8,9,2
intersection: 1,5,8,9
except: 1,3,5,9,8,2 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],b[50],m,n,i,j;   // ENTER THE ARRAY ELEMENTS IN SORTED ORDER....
    printf("Enter the no. of elements in array1:");
    scanf("%d",&m);
    printf("Enter the array 1 elements:\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter the no. of elements in array2:");
    scanf("%d",&n);
    printf("Enter the array 2 elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    printf("The intersection of two arrays:\n");
    i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
            j++;
        else if(a[i]<b[j])
            i++;
        else if(a[i]==b[j])
        {
            printf("%d ",b[j]);
            i++;
            j++;
        }
    }
    printf("\nThe union of two arrays:\n");
    i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]>b[j])
            printf("%d ",b[j++]);
        else if(a[i]<b[j])
            printf("%d ",a[i++]);
        else if(a[i]==b[j])
        {
            printf("%d ",b[j]);
            i++;
            j++;
        }
    }
    while(i<m)
        printf("%d ",a[i++]);
    while(j<n)
        printf("%d ",b[j++]);
    printf("\nThe except of array 1 and arary 2 :\n");
    i=0,j=0;
    while(i<m)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);
        i++;
    }
    while(j<n)
    {
        if(b[j]%2==0)
            printf("%d ",b[j]);
        j++;
    }
}
