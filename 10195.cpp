#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c;
	double S,A,R;
	while(cin>>a>>b>>c)
	{
		S=(a+b+c)/2;
		 if(S==0)
        {
            printf("The radius of the round table is: 0.000\n");
        }
        else
		{
		A=S*(S-a)*(S-b)*(S-c);
		R=sqrt(A)/S;
		printf("The radius of the round table is: %.3lf\n",R);
		}
	}
	return 0;
}
