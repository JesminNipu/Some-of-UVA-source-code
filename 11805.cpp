#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,p,result,tc,i,j,c=0;
while(cin>>tc)
{
while(tc--)
 {

 cin>>n>>k>>p;
 
 result=k+p;
 
 while(result>n)
 {
 	result-=n;
 }
 printf("Case %d: %d\n",c+1,result);
 c++;
}
}
return 0;
}
