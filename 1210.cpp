#include <stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<cstring>
using namespace std;
bool flag[10001];
int primes[10001],result[10001];
int cnt,s;

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

void value() {
//cout<<"p"<<N<<endl;
    for (int i = 0; i < cnt; i++) {
         s = 0;
        for (int j = i; j < cnt; j++) {
            s += primes[j];
            if (s > 10001)
			cout<<"s value"<<s<<endl;
			 continue;
            result[s]++;
        }
    }
}

int main() {
    
    int n;
    sieve(10001);
   value();

    while (cin>>n and n>0) { 
         cout<<result[n]<<endl;
    }
    return 0;
}
