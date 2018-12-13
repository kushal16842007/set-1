#include<stdio.h>
#include<string.h>
int main()
{
    char s[999],t,c;
    int f=1,i=0;
    //scanf("%c",&c);
    scanf("%[^\n]s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(f==1)
        {
            s[i]=s[i]-32;
            f=0;
        }
        else if(s[i]==' ')
        {
            f=1;
        }
        
    }
    printf("%s",s);
    return 0;
}
