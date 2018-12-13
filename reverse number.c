#include<stdio.h>
int main()
{
    int n,f=1,t=0,m;
    scanf("%d",&n);
    while(n!=0)
    {
        t=t*10;
        m=n%10;
        t =t+m;
        n=n/10;
    }
    printf("%d",t);
    return 0;
}