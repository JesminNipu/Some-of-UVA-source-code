#include<bits/stdc++.h>

using namespace std;
int main(){
double d,v,u,t1,t2;
int t;
cin>>t;
for(int i=0;i<t;i++){
cin>>d>>v>>u;
if( u==0 || v==0 || v>=u ){
printf("Case %d: can't determine\n",i+1);
continue;
}
t1=d/u;
t2=d/sqrt(u*u-v*v);
printf("Case %d: %.3lf\n",i+1,(t2-t1));
}
}
