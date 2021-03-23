/*count the duplicates of the array..
ip: [2,1,3,2,2,5,8,9,8]
op: 2->3
    1->1
    3->1
    5->1
    8->2
    9->1
    */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100],v[50],count,i,j;
    printf("Enter the no. of elements in the array:");
    scanf("%d",&n);
    printf("Enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        v[i]=0;
    }
    for(i=0;i<n;i++)
    {
            count=1;
            for(j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    count++;
                    v[j]=-1;
                }
            }
        if(v[i]!=-1 )
        {
            v[i]=count;
        }
    }
    printf("The duplicate elements are:\n");
        for(i=0; i<n; i++)
            {

            if(v[i]!= -1)
            {
                    printf("%d->%d\n", a[i], v[i]);

            }
            }
}
