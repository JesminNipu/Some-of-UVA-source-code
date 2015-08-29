#include <bits/stdc++.h>
using namespace std;
int a[502];
int main()
{
	int i,j,t,n,sum;
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		int v = a[n / 2];
sum = 0;
for (int j = 0; j < n; j++) {
sum += abs(v - a[j]);
}
		cout<<sum<<endl;
	}
	return 0;
}
