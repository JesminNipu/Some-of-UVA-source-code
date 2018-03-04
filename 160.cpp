#include<bits/stdc++.h>
bool flag[100];
int List[100],primes[100]; 
int cnt;   
using namespace std;


void sieve(int n)
{
	
cnt=0;
primes[cnt++] = 2;
for(int i=3; i<=n; i+=2)
{
if(flag[i] == 0)
{
primes[cnt++] = i;
if(i <= n/i)
{
for(int j=i*i; j<=n; j+=i*2) 
flag[j] = 1;
}
}
}

return ;
}
void primeFactorize( int n)
 {
     
   
    for(int i = 0;primes[i]<=sqrt(n);i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
            while( n % primes[i] == 0 )
			 {
			 	List[primes[i]]++;
                n /= primes[i]; 
			
            }
            
        }
    }
    
    if( n > 1 ) 
	{
        
        List[n]++;
    }
    
    return;
}
int main() 
{
	
	int n,c,nw,i;
	sieve(100);
	while(cin>>n)
	{
		if(n==0) break;
		c=0;
		nw=n;
	    while(n>1)
		{
		primeFactorize(n);
		n-=1;
		}
    printf("%3d! =",nw);
    
    for( i = 2; i <=nw; i++ ) 
    {
    
    	if(List[i]!=0)
    	{
    		if(c==15)
    		printf("\n      ");
    		printf("%3d", List[i]);
    		c++;
    	    List[i]=0;
    	}
    	
    }
        
    cout<<endl;
}
return 0;
}
