//Check if two strings are anagrams of each other.....
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[50],b[50];
    printf("Enter two strings:\n");
    gets(a);
    gets(b);
    int x[26]={0},y[26]={0},count=0;
    int i=0;
    while(a[i]!='\0')
    {
        x[a[i]-'a']++;
        y[b[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(x[i]!=y[i])
        {
            count++;
        }
    }
    if(count!=0)
        printf("the strings are not anagrams...");
    else
        printf("The strings are anagrams...");
}
