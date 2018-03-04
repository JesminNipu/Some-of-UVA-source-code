#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int prime[] = {2,3,5,7,11,13,17,19,23,29,31};
    int sum,i,j,count;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        count =0;
        for(i=0; i<11; i++)
        {
            if(n==prime[i])
                count =1;
        }
        if(count==1)
        {
            if(n==11 || n==23 || n==29)
            {
                cout<<"Given number is prime. But, NO perfect number is available." << endl;
            }
            else
            {
                sum = pow(2,n-1) * (pow (2,n)-1);
                cout << "Perfect: " << sum <<'!'<<endl;
            }
        }
        else
        {
            cout << "Given number is NOT prime! NO perfect number is available."<<endl;
        }
    }
return 0;
}
