﻿#include<stdio.h>

int main() {
   int n;
   scanf("%d",&n);
   int ar[n];
   for(int i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   for(int i=0;i<n;i++)
   {
       for(int j=i+1;j<n;j++)
       {
           if(ar[i]==ar[j])
           {
               ar[i]=ar[j]=0;
               break;
           }
       }
   }
   for(int i=0;i<n;i++)
   {
       if(ar[i]!=0)
       {
           printf("%d",ar[i]);
           break;
       }
   }
}
