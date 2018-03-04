#include<bits/stdc++.h>
bool flag[1000005];
int List[1000005],primes[100000]; 
int listSize,cnt;   
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

void primeFactorize( int n )
 {
    listSize = 0;   
     
   
    for( int i = 0;i<cnt and primes[i]<=(int)sqrt(n);i++ ) 
	{ 
        if( n % primes[i] == 0 ) 
		{ 
		listSize++;
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				
                //List[listSize] = primes[i]; 
                 
            }
            
        }
    }
    
    //if( n ==1 ) 
	
      //  break;
        //List[listSize] = n; 
        //listSize++; 
    
    
    return ;
}
int main() 
{
	int n,N;
	sieve(1000005);
 while(cin>>n)
   {
       if(n==0) break;
       if(n==1)
       {
           cout<<"0"<<endl;
           continue;
       }
       N=n;
       primeFactorize(N);
       cout<<N<<" : "<<listSize+1<<endl;
   }
return 0;
}




