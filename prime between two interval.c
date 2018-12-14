#include <stdio.h>
int main()
{
    int s,e,j,f;
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
            printf("%d ",i);
        }
    }
   
    return 0;
}
