#include <bits/stdc++.h>
using namespace std;
int main()
{
int n,a[26],b[26],c[26],i,j,farm,ans;
cin>>n;
while(n--)
{
	cin>>farm;
	ans=0;
	for(i=0;i<farm;i++)
	{
		cin>>a[i]>>b[i]>>c[i];
		ans+=a[i]*c[i];
	}
	cout<<ans<<endl;
}	
return 0;
}
