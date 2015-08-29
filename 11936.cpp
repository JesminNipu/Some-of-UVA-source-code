#include <bits/stdc++.h>

using namespace std;
int main()
{
	int tc,a,b,c;
	
	cin>>tc;
	while( tc-- )
	{
		cin>>a>>b>>c;
		
		if( a+b>c and b+c>a and c+a>b)
		cout<<"OK"<<endl;
		else
		cout<<"Wrong!!"<<endl;
	}
	return 0;
}
