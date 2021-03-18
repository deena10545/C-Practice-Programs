//split string by space into words...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    int i;
    printf("Enter the string: ");
    gets(a);
    printf("strings after split by space are:\n ");
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
            printf("\n");
        printf("%c",a[i]);
    }
}
