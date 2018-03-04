#include<bits/stdc++.h>
bool flag[20000005];
int List[100000],primes[100000]; 
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
            while( n % primes[i] == 0 )
			 {
			 	
                n /= primes[i]; 
				
                List[listSize] = primes[i]; 
                listSize++; 
            }
            
        }
    }
    
    if( n > 1 ) 
	{
        
        List[listSize] = n; 
        listSize++; 
    }
    
    return ;
}
int main() 
{
	int n;
 sieve(50000);
    while(cin>>n) {
       // scanf("%d", &n);
       //printf(n < 0? "%d = -1 x " : "%d = ", n);
        if(n == 0) break;
        primeFactorize(fabs(n));
        printf(n < 0? "%d = -1 x %d" : "%d = %d", n, List[0]);
        for(int i = 1; i < listSize; i++)
            printf(" x %d", List[i]);
        printf("\n");
	
}

    return 0;
}

