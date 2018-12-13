#include <stdio.h>
#include<string.h>
int main()
{
    char s[999];
    int sum =0,f=0;
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='I')
        {
            sum=sum+1;
            f=1;
        }
        else if(s[i]=='V')
        {
            sum = sum+5;
            if(f==1)
            {
                sum--;
                sum--;
                f=0;
            }
        }
        else if(s[i]=='X')
        {
            sum = sum +10;
            if(f==1)
            {
                sum--;
                sum--;
                f=0;
            }
        }
    }
    printf("%d",sum);
    return 0;
}
