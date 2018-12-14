#include<stdio.h>

int main() {
   int n,f=0;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   
   for(int i=0;i<n;i++)
   {
       if(i%2 != ar[i]%2)
       printf("%d ",ar[i]);
   }
}
