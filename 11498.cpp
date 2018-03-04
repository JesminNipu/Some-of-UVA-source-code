#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,n,m,x,y;
	while(cin>>tc)
	{
		if(tc==0) break;
		cin>>n>>m;
		for(int i=0;i<tc;i++)
		{
			cin>>x>>y;
		if(x==n || y==m) cout<<"divisa\n";
		else if(x>n and y>m) cout<<"NE\n";
		else if(x<n and y>m) cout<<"NO\n";
		else if(x<n and y<m) cout<<"SO\n";
		else if(x>n and y<m)
		cout<<"SE\n";
		
		}
	}
	return 0;
}
