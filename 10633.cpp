#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long n,N;
    while(cin>>n and n>0)
    {
        
        N=(n*10)/9;
        if(n%9==0)
        {
            cout<<N-1<<" "<<N<<endl;
        }
        else
        {
            cout<<N<<endl;
        }
    }
    return 0;
}
