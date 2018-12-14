#include<stdio.h>

int main() {
   int n,t,byes=0,br=0;
   scanf("%d",&n);
   while(n!=1)
   {
   t=2;
   while(t<n)
   {
       t = t*2;
   }
   t=t / 2;
   n=n-t;
   byes = byes + n;
   }
   printf("%d",byes);
}