#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0,i,n;
    cin >> t;
    while(t--)
    {
        int n = 0;
        cin >> n;
        n *= 567;
        n /= 9;
        n += 7492;
        n *= 235;
        n /= 47;
        n-= 498;
        n/=10;
        n%=10;
        printf("%d\n",abs(n));
    }
    return 0;
}
