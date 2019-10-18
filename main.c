#include <stdio.h>
#include <math.h>

int main() {
    int s1=0,s2=0,n,l,i,x=0;
   scanf("%d",&n);
   int xor=0;
   for(i=1;i<n;i++)
   {
       int nr;
       scanf("%d",&nr);
       xor=xor^nr;
   }

   int xorn=0;
   for(int i=1;i<=n;i++)
       xorn=xorn^i;

   printf("%d",xor^xorn);
    return 0;
}