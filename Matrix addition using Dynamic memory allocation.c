#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,m1,n1,i,j,*a,*b,*c;
    printf("Enter the no. of rows and columns for 1st matrix:");
    scanf("%d %d",&m,&n);
    printf("Enter the no. of rows and columns for 2nd matrix:");
    scanf("%d %d",&m1,&n1);
    a=(int *)malloc(m*n*sizeof(int));
    b=(int *)malloc(m1*n1*sizeof(int));
    c=(int *)malloc(m*n*sizeof(int));
    if(m==m1 && n==n1)
    {
        printf("Enter the array elements of matrix 1:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                scanf("%d",(a+(i*n)+j));
        }
        printf("Enter the array elements of matrix 2:\n");
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
                scanf("%d",(b+(i*n1)+j));
        }
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                    *(c+(i*n)+j)= *(a+(i*n)+j)+ *(b+(i*n)+j);
            }
        printf("The resultant matrix is:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d ",*(c+(i*n)+j));
            }
            printf("\n");
        }
        free(a);
        free(b);
        free(c);
    }
    else
        printf("Matrix addition is not possible");
}
