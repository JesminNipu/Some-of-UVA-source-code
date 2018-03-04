 #include <bits/stdc++.h>
 
 using namespace std;
int main()
{
  int n, array[5000],k, c,count,d,T, t;
 
  while(cin>>T)
  {
  	
  	for(k=0;k<T;k++)
  	{
  	
  	cin>>n;
	count=0;
	for (c = 0; c < n; c++)
	   {
	    cin>>array[c];
	   }

  	for (c = 1 ; c <= n - 1; c++) {
    d = c;
 	
    while ( d > 0 && array[d] < array[d-1]) {
    	count++;
      t          = array[d];
      array[d]   = array[d-1];
      array[d-1] = t;
 
      d--;
    }
  }

 
    printf("Optimal train swapping takes %d swaps.\n",count);
  
}
  	
  }
  
 
  return 0;
}
