#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v[10010];
    //vector<int>v;
	int i,j,n,k,max,price1,a,price2,m,diff,tmp;

    while(cin>>n)
    {
        for(i=0;i<n;i++)
            cin>>v[i];
            //v.push_back(i);
        cin>>m;

        max=1000000;
        for(i=0;i<n-1;i++)
            for(j=i+1;j<n;j++)
            {
                if((v[i]+v[j])== m)
                {
                    diff=abs(v[i]-v[j]);
                        if(diff<max)
                        {
                            max=diff;
                            price1=v[i];
                            price2=v[j];
                        }
                }
            }
        if(price1>price2)
        {
            tmp=price1;
            price1=price2;
            price2=tmp;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",price1,price2);
    }
    return 0;
}
