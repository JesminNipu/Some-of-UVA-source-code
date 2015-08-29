#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,i,score,sum,count;
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum=0,	count=0;
		cin>>s;
		for(int j=0;j<s.size();j++)
		{
			 if(s[j]=='O')
            {
                count++;
                sum+=count;
            }
            if(s[j]=='X')
            {
                count=0;
            }
		}
	//	sum+=count;
		cout<<sum<<endl;
	}
	return 0;
}
