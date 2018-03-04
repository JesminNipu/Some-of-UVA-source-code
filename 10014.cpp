#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    double a0,an,a1,a,b,t,tc,n;
    double c[3002];
	int i;
     cin>>t;
     while(t--)
{
	b=0;
cin>>n;
cin>>a0>>an;
if(n==0) printf("%0.2lf\n",an);
else{
for( i=0;i<n;i++)
{
	cin>>c[i];
 
b+=((n-i)*c[i])*2;
}
 a=((n*a0)+an);
a1=(a-b)/(n+1);
	
printf("%0.2lf\n",a1);	
    }
   if(t) printf("\n");
}
 return 0;
}
