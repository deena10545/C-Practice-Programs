#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50];
    printf("Enter a string:");
    gets(a);
    int i=0,sum=0;
    while(a[i]!='\0')
    {
        if(a[i]>='0' && a[i]<='9')
            sum+=(a[i]-'0');
        i++;
    }
    printf("%d",sum);
}
