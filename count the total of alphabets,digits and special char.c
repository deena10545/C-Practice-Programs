#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[100];
    int i=0;
    printf("Enter the string:");
    gets(a);
    int count=0,count1=0,count2=0;
    while(a[i]!='\0')
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))
            count++;
        else if(a[i]>='0' && a[i]<='9')
            count1++;
        else if((a[i]>=32 && a[i]<=47) || (a[i]>=58 && a[i]<=64) || (a[i]>=91 &&a[i]<=96) || (a[i]>=123 && a[i]<=126))
            count2++;
        i++;
    }
    printf(" Alphabets: %d\n Digits: %d\n Special characters: %d",count,count1,count2);

}
