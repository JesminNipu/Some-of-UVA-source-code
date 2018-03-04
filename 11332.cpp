#include <bits/stdc++.h>
using namespace std;

int func_tion(int n)

{
		int j,sum=0;
		  if(n<10)
        return n;
       else
		{
			for(j=0;; j++)
	        {
	          
	          sum+=n%10;
	             n=n/10;
	             
	           if(n==0)
	            break;
	        }
        return func_tion(sum);
		
		}
}
		
int main()
{
	int a,n,res,sum,k;
	while(cin>>n && n!=0)
	{
		cout<<func_tion(n)<<endl;
	}
	return 0;		
}
	

