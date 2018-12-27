#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=0,p=n;
    while(p!=0)
    {
        int x=p%10;
        p=p/10;
        t=t*10;
        t=t+x;
    }
    if(t==n)
    printf("yes");
    else
    printf("no");
    return 0;
}
