#include <iostream>

using namespace std;

int main()
{
    int x;
bool xo=false;
cin>>x;
for(int i=2;i<x;i++){
if(x%i==0)xo=true;
}
if(xo==true)cout<<x<<":Composite";
else if(x!=1)cout<<x<<":Prime";
else cout<<x<<":Unit";
    return 0;
}
