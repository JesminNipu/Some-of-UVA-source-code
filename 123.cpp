#include <bits/stdc++.h>
using namespace std;
 
 
long long int reverse(long long int n)
{
    long long int sum=0,r;
    while(n > 0)
    {
         r=n%10;
        
         sum=sum*10+r;
         n=n/10;
    }
 
    return sum;
}
int main()
{
	long long int t, sum, count;
    int cse;
    cin >> cse;
 
    for (int i=0; i<cse; i++)
    {
 
         sum=0, count=0;
        cin >> t;
         
         if(reverse(t) == t)
         {
         	printf("%lld %lld\n",count,t);
         }
        else if(reverse(t) != t)
        {
            count++;
            t += reverse(t);
        }
 
        printf("%lld %lld\n",count,t);
     
 
 
    }
 
 
    return 0;
}

