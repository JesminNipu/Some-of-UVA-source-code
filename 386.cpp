#include <bits/stdc++.h>
using namespace std;
int main()
{
   int a,b,c,d,n,i,j,k;
   for(n=6;n<=200;n++)
   {
   	int a=n*n*n;
   	for(i=2;i<=200;i++)
   	{
   		int b=i*i*i;
   		 for( j=i;j<n;j++)
           {
              int c = j*j*j;
               for( k=j;k<n;k++)
               {
                  int d = k*k*k;
                   if(a==(b+c+d))
                   {
                   printf("Cube = %d, Triple = (%d,%d,%d)\n",n,i,j,k);
                   }
 
               }
           }
   }
}
return 0;
}

   
