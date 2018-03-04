#include<bits/stdc++.h>
using namespace std;
int main()
{
	char st[100];
	
  long int a,i,j,ans,sum;
  
  while(scanf("%s",st))
  {
  	sum=0;
  	j=strlen(st);
  	for(i=0;i<j;i++)
  	{
  		a=st[i]-'0'; 
  		ans=a*(pow(2,j-i)-1);
  		sum+=ans;
  	}
  	if(sum==0)    break;
  	cout<<sum<<endl;
  }
  return 0;
}
