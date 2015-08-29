#include<bits/stdc++.h>

using namespace std;

int main()

{
	
	long int N,X,r;
	
	int T,i,j=1;
	
	cin>>T;
	
	while(T--)
	{
	cin>>N;
	
	printf("Case %d:",j++);
	
	r=sqrt(N);
	
	for(i=r-1;i>0;i--)
	
	{
		
	X=N-i*i;
	
	if(X%i==0)
	
	cout<<" "<<X;
	}
	cout<<endl;
	}
return 0;
}

