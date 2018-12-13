#include<stdio.h>
int main()
{
    int a,i=0;
	scanf("%d",&a);
	while(a!=0)
	{
	    i++;
	    a=a/10;
	}
	printf("%d",i);
	return 0;
}
