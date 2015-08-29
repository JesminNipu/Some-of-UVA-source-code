#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,l,fn,count;
	while(cin>>a>>b>>c>>d>>l)
	{
		if(a==0 and b==0 and c==0 and d==0 and l==0) break;
		count=0;
		for(int i=0;i<=l;i++)
		{
			
		fn=a*i*i + b*i +c;
		if(fn%d==0)
		count++;
		
		}
		cout<<count<<endl;
	}
	return 0;
}
