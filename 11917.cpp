#include <bits/stdc++.h>
using namespace std;
int main()
{

	int n;
	cin>>n;
	int tc=1;
	while(n--)
	{
		int input;
		cin>>input;
		map<string,int>m;
		string s;
		int d;
		
	for(int i=1;i<=input;i++)
	{
		cin>>s>>d;
		m[s]=d;
	}
		
		int D;
		cin>>D;
		string k;
		cin>>k;
        printf ("Case %d: ", tc++); 
 
        if ( m [k] && m [k] <= D )
		 printf ("Yesss\n");
        else if ( m [k] && m [k] <= D + 5 )
		 printf ("Late\n");
        else
		printf ("Do your own homework!\n");
	
	}
	return 0;
}
