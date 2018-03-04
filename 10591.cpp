#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,d,sum,num,tc,n,ans,digit;
while(cin>>tc)
{
for(k=1;k<=tc;k++)
{
cin>>n;	
num=n,ans=0;
while(n>9)
{

	while(n!=0)
{
	digit=n%10;
	n/=10;
	ans+=digit*digit;
	
}
n=ans;
ans=0;
}
while(n<9)
{
if(n<=9){
      ans=n;
      break;
      }	
}
 
if(ans==1 || ans==7)
    printf("Case #%lld: %lld is a Happy number.\n",k,num);
else
    printf("Case #%lld: %lld is an Unhappy number.\n",k,num);
}
}
return 0;
}
