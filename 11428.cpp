#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,i,j,x,y;
	 bool penalty;
	 
    while(cin>>n)
    {
    	if(n==0) break;
        penalty=false;
        for(i=1;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                if((i*i*i-j*j*j)==n)
                {
               cout<<i<<" "<<j<<endl;
                penalty=true;
                break;
                 
                }
            }
            
             if(penalty==true)
                    break;    
        }
       if(penalty==false)
       cout<<"No solution\n";
    }
    return 0;
}

