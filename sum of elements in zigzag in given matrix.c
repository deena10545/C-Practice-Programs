//sum of elements in zig zag sequence in given matrix....
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,c,a[50][50],i,j;
    printf("Enter the no. of rows:");
    scanf("%d",&r);
    printf("Enter the no. of columns:");
    scanf("%d",&c);
    printf("Enter the array elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
            printf(" ");
        }
        printf("\n");
    }
    int res=0;
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if((i==0) || (i+j==r-1) || (i==r-1))
                    res+=a[i][j];
            }
        }
        printf("The sum of zig-zag sequence is: %d",res);
    }
    else
        printf("sum of Zig-zag sequence is not possible..");
}
