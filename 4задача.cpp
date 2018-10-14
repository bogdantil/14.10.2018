#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,sum=0;
cin>>n;
vector <int> xo(n);
for(int i=0;i<n;i++){
cin>>xo[i];
if(((xo[i]%27==0)&(xo[i]%72!=0))||((xo[i]%72==0)&(xo[i]%27!=0)))sum+=xo[i];
    return 0;
}
}
