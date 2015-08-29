#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h1,m1,h2,m2,hr,mr,tr;
	while(cin>>h1>>m1>>h2>>m2)
	{
		
		if(h1==0 && m1==0 && h2==0 && m2==0) break;
		hr=h2-h1;
		mr=m2-m1;
		tr=(hr*60)+mr;
		
		if(tr<0)
		{
			tr+=24*60;
		}
		cout<<tr<<endl;
	}
	return 0;
}
