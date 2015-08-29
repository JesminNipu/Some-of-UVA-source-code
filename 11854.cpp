#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, array[10], c, d, t;
 
 while(cin>>array[0]>>array[1]>>array[2])
 {
 	if(array[0]==0 and array[1]==0 and array[2]==0) break;
  for (c = 0 ; c <= 2; c++) {
    d = c;
 
    while ( d > 0 && array[d] < array[d-1]) {
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }
 
   int x=array[0];
  int y=array[1];
   int z=array[2]; 
  if(pow(x,2) + pow(y,2)==pow(z,2))
  {
  	printf("right\n");
  }
  else
  printf("wrong\n");
 	
 }
  
  return 0;
}
