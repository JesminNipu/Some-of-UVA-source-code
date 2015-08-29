#include <bits/stdc++.h>
using namespace std;
int main()
{
	int 
	
	num,tc,sum,j;
	
	vector<int>v;
	
	cin>>tc;
	
	while(tc--)
	{
		cin>>num;
		
		v.push_back(num);
		
		int tempo=num;
		
		int i=0;
		
		while(tempo)
		{
			v[i]=tempo%10;
			tempo/=10;
			i++;
		}
		for(sum = j =0;j<i;j++)
        {
            sum = sum + pow(v[j],i);
        }
        if(sum == num)
        {
            cout<<"Armstrong\n";
        }
        else
        {
            cout<<"Not Armstrong\n";
        }
	}
	return 0;
}
