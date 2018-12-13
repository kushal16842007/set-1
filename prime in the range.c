#include <stdio.h>
int main()
{
    int s,e,j,f,c=0;
    scanf("%d%d",&s,&e);
    for(int i=s;i<=e;i++)
    {
        f=0;
        j=2;
        while(j<i)
        {
            if(i%j==0)
            {
                f=1;
                break;
            }
            j++;
            
        }
        if(f==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
