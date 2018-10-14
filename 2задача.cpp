#include <iostream>

using namespace std;

int main()
{
    int n,x,z;
cin>>x>>n;
bool xo=false;
for(int i=2;i<x*n;i++){
for(int j=2;j<x*n;j++){
if((i*x)%n==1){z=i;
xo=true;
break;}
}
if(xo==true)break;
}
if(xo==true)cout<<z;
else cout<<"None";
    return 0;
}
