#include <bits/stdc++.h>
using namespace std;
int main()
{
	int tc,i,num,k,j, A,B,C,D,E,F,G,H,I,J;
	cin>>tc;
	while(tc--)
	{
		A=0,B=0,C=0,D=0,E=0,F=0,G=0,H=0,I=0,J=0;
		cin>>num;
		for(i=1;i<=num;i++)
		{
			
			int s=i;
			
			 for( k=1 ; ; k++)
            {
			int mod=s%10;
			if(mod==0)
			A++;
			if(mod==1)
			B++;
			if(mod==2)
			C++;
			if(mod==3)
			D++;
			if(mod==4)
			E++;
			if(mod==5)
			F++;
			if(mod==6)
			G++;
			if(mod==7)
			H++;
			if(mod==8)
			I++;
			if(mod==9)
			J++;
			s/=10;
			if(s==0) break;
		}
		}
		cout<<A<<" "<<B<<" "<<C<<" "<<D<<" "<<E<<" "<<F<<" "<<G<<" "<<H<<" "<<I<<" "<<J<<endl;
		
	}
	return 0;
}
