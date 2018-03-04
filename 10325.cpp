#include <bits/stdc++.h>

using namespace std;

int check_prime (long int n)
 { int i;
    for ( i = 2; i * i <= n; i++)
    {
    if (n % i == 0)
    return 0;
    }
    return 1;
   }
 
 int rev(int n)
 {
  int reverse=0, rem;
  
  while(n)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
     
  }
  return reverse;
 }
 
int main()
{
	long int n;

	while(cin>>n)
	{
	
	 if (check_prime(n)!=1)
     cout<<n<<" is not prime."<<endl;
  else
    {
        int r=rev(n);
    if ( check_prime(r)==1 && r!=n )
                cout<<n<<" is emirp."<<endl;
            else
               cout<<n<<" is prime."<<endl;
        }
    }
    return 0;
  }
