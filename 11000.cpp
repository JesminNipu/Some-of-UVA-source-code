#include <bits/stdc++.h>

using namespace std;

int main()
{
	long int temp,male,female,total,y;
	int i;
	while(cin>>y && y>=0)
	{
		male=0,female=1;
			for( i=0;i<y;i++)
			{
				temp=male;
				male=female+temp;
				female=temp+1;
				
			}
			cout<<male<<" "<<female+male<<endl;
	}
	return 0;
}
