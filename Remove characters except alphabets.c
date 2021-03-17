 // remove all characters in a string except alphabets...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    printf("Enter a string:");
    gets(a);
    int i=0,j=0;
    while(a[i]!='\0')
    {
        while(!(a[i]>='a' && a[i]<='z') && !(a[i]>='A' && a[i]<='Z'))
        {
            for(j=i;a[j]!='\0';j++)
                a[j]=a[j+1];
            a[j]='\0';
        }
        i++;
    }
    printf("%s",a);

}
