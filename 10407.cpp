#include <bits/stdc++.h>
using namespace std;

//long int gcd(long int a, long int b)
//{
// long int rem;
// while(1)
// {
// rem = a % b;
// if(rem == 0)
// {
// return b;
// }
// a = b;
// b = rem;
//
// }
//
// return 0;
//}

int main()
{

long int arra[10000];
long int i, n, pos, swap, j, rem, temp, ans;

while(scanf("%d",arra) == 1 and arra[0] != 0)
{
for( i = 1; ; i++)
{
scanf("%ld", &arra[i]);
if(arra[i] == 0)
break;
}

n = i;

sort(arra, arra+n);

if(n == 2)
{
ans = arra[1] - arra[0];
}
else if(n == 3)
{
ans = __gcd(arra[1] - arra[0], arra[2] - arra[0]);

}
else
{

for(i = 0; i < n - 3; i++)
{
temp = arra[i];
for(j = i; j < n; j++)
{

arra[j] -= temp;
}

}

ans = __gcd(__gcd(arra[n - 3], arra[n - 2]), arra[n - 1]);
}

printf("%ld\n", ans);
}


return 0;
}
