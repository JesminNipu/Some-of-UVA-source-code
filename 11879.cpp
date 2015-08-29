#include <bits/stdc++.h>
using namespace std;
char input[1050];
int main()
{
	int i,j,l,rem,total;
	while(1)
	{
	l=strlen(gets(input));
	rem=0;
	if(l==1 and input[0]=='0') break;
	for(i=0;i<l;i++)
	{
		total=rem*10 + (input[i] - '0');
		rem=total%17;
	//these two eqn same rem=(rem*10 + (input[i] - '0'))%17;
		
	}	
	if(rem==0) cout<<"1\n";
        else
        cout<<"0\n";
	}
	return 0;
}
