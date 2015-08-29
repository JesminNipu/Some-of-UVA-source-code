#include <bits/stdc++.h>
using namespace std;
int main()
{
	string ch1,ch2;
	map<string,string>m;
	int n,l,i,j,k;
	char c1,c2;
	cin>>l>>n;
	for(i=0;i<l;i++)
	{
		cin>>ch1>>ch2;
		m[ch1]=ch2;
	}
	for(i=0;i<n;i++){
        cin>>ch2;
        if(m[ch2]!="") cout<<m[ch2]<<endl;
        else{
            c1=ch2[ch2.size()-1];
            c2=ch2[ch2.size()-2];
            
            if(c1=='y'&&(c2!='a'&&c2!='e'&&c2!='i'&&c2!='o'&&c2!='u'))
			{
               ch2.erase(ch2.size()-1,1);
                cout<<ch2<<"ies"<<endl;
            }
			else if(c1=='o'||c1=='s'||c1=='x'||(c1=='h'&&c2=='c')||
			(c1=='h' && c2=='s'))
			 cout<<ch2<<"es"<<endl;
            else 
			cout<<ch2<<"s"<<endl;
        }
    }

    return 0;
}

