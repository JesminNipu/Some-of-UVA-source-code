#include <vector>
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int input,value;
	vector<int>myvector;
	if(myvector.empty())
	
		while(cin>>input)
		{
		myvector.push_back(input);
		sort(myvector.begin(),myvector.end());
		if(!(myvector.empty()))
		
		    if(myvector.size() % 2 == 1) {
           cout<<myvector[myvector.size() / 2]<<endl; 
        } 
        else
        cout<<( myvector[myvector.size() / 2] + myvector[myvector.size() / 2 - 1] ) / 2<<endl;
        
}
return 0;
}
