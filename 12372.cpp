#include <bits/stdc++.h>
using namespace std;
int main()
{
	int H,W,L,tc,c=1;
	cin>>tc;
	while(tc--)
	{   
	   
		cin>>L>>W>>H;
		printf("Case %d: ",c++);
		if(L<=20 and W<=20 and H<=20)
		cout<<"good"<<endl;
		else
		cout<<"bad"<<endl;
	}
	return 0;
}
