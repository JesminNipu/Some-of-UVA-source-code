#include <bits/stdc++.h>
using namespace std;
int main()
{
	int e,a;
	while(cin>>a)
	{
		if(a==0) break;
		e=0;
		while(a>=3)
		{
			a=a-3;
		e++;
	
		a++;
		}
		if(a==2)
		{
			cout<<e+1<<endl;
		}
		else
		cout<<e<<endl;
	}
	return 0;
}
