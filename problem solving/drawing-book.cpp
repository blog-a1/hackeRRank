#include<iostream>
using namespace std;
int main()
{
    int n,p,turns;cin>>n>>p;
    turns=(n/2)-(p/2);
    if(turns>p/2)   turns=p/2;
    cout<<turns<<endl;
    return 0;
}