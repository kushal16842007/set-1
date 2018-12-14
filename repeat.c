#include<stdio.h>

int main() {
   int n,f=0;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   int t=ar[1];
   for(int i=0;i<n;i++)
   {
       if(i==1)
       continue;
       if(t==ar[i])
       f++;
   }
   if(f>0)
   printf("%d",t);
   else
   printf("unique");
}
