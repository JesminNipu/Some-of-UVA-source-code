#include <bits/stdc++.h>
using namespace std;
long int array[2000005];
int main()
{
long int n, c, d, t;
 while(scanf("%ld", &n)==1 )
 {
 	if(n==0) break;
 	for (c = 0; c < n; c++)
	  {
    scanf("%ld", &array[c]);
  }
 
  for (c = 1 ; c <= n - 1; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }

  for (c = 0; c < n ; c++) {
    printf("%ld", array[c]);
    if(c<(n-1))
    printf(" ");
    
  }
 printf("\n");
 }
  return 0;
}
