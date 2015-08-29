#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    double F,C,c,d;
     int tc,i;
    while(cin>>tc)
    {
        for(i=1;i<=tc;i++)
        {
            cin>>c>>d;
             F = 9*c/5+d;
             C = F*5/9;
            printf("Case %d: %.2lf\n",i,C);
        }
        
    }
    return 0;
}
