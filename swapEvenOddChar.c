#include<stdio.h>
#include<string.h>
int main()
{
    char s[999],t;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        t=s[i];
        s[i]=s[i+1];
        s[i+1]=t;
        i++;
    }
    printf("%s",s);
    return 0;
}
