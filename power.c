#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c=1;
    scanf("%d%d",&a,&b);
    for(int i=0;i<b;i++)
    {
        c = c * a;
        
    }
    printf("%d",c);
    return 0;
}
