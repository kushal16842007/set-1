#include <stdio.h>
int main()
{
    int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int t;
	if(a>b)
	t=a;
	else
	t=b;
	if(t<c)
	t=c;
	printf("%d",t);
	return 0;
}
