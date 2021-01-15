#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,j=5,s=0;cin>>n;
    for(int i=0;i<n;i++)
    {
        j=j/2;s+=j;j*=3;
    }
    cout<<s<<endl;
    return 0;
}