#include<stdio.h>
#include<string.h>
int main()
{
    char a[99],b[99];
    int c=0;
    scanf("%s%s",a,b);
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        c++;
        if(c>1)
        {
            c=9;
        break;    
        }
        
    }
    if(c==9)
    printf("no");
    else
    printf("yes");
    return 0;
}
