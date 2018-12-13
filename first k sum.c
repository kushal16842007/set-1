#include<stdio.h>
int main()
{
    int n,k,sum=0;
	scanf("%d%d",&n,&k);
	for(int i=0;i<k;i++)
	{
	    scanf("%d",&n);
	    sum = sum +n;
	}
	printf("%d",sum);
	return 0;
}
