#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    printf("Enter a string:");
    gets(a);
    int b=strlen(a)-1;
    int i=0,j=b,temp;
    while(i<j)
    {
       if(a[i]==' ')
            i++;
        else if(a[j]==' ')
            j--;
        else
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
    }
    printf("%s",a);
}
