#include <bits/stdc++.h>

using namespace std;
int main()
{
	int t1,t2,f,a,ct1,ct2,ct3,sum,avr,c,t;
	cin>>t;
	for(c=0;c<t;c++)
	{
	sum=0;

	cin>>t1>>t2>>f>>a>>ct1>>ct2>>ct3;
	{
	
	if(ct1<=ct2 && ct1<=ct3)
	
	avr=(ct2+ct3)/2;
	 
	 if(ct2<=ct1 && ct2<=ct3)
	
	avr=(ct1+ct3)/2;
	
	 if(ct3<=ct1 && ct3<=ct2)
	
	avr=(ct1+ct2)/2;
	
	sum=t1+t2+f+a+avr;
	
	if(sum>=90)
	
	printf("Case %d: A\n",c+1);
	
	else if(sum>=80)
	
	printf("Case %d: B\n",c+1);
	
	else if(sum>=70)
	
	printf("Case %d: C\n",c+1);
	
	else if(sum>=60)
	
	printf("Case %d: D\n",c+1);
	
	else if(sum<60)
	
	printf("Case %d: F\n",c+1);
			
	}	
	}
	return 0;
}
