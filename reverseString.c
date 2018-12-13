#include<stdio.h>
int main()
{
    char a[999];
    scanf("%s",a);
    int i=0;
    for(;a[i]!='\0';i++);
    i--;
    for(;i>=0;i--)
    printf("%c",a[i]);
    return 0;
}