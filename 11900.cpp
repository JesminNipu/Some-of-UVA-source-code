#include<bits/stdc++.h>
using namespace std;
int main()
{
int tc,n,p,q,b,i,j,a[30],sum,sr=1,egg,wt;
while(cin>>tc)
{
for(j=1;j<=tc;j++)
 {
 
 cin>>n>>p>>q;
 
 for(i=0;i<n;i++)
  {
  	cin>>a[i];
  }
  egg=0,wt=0;
for(i=0;i<n;i++)
{
	if(egg<p and wt+a[i]<=q)
	{
		egg++;
		//printf("he %d",egg);
		wt+=a[i];
	}
}
 printf("Case %d: %d\n",sr++,egg);
 }
}
return 0;
}
