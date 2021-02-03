#include<iostream>
using namespace std;
int main()
{
    int t,n,c,m,s;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>c>>m;
        s=(n/c);
        s+=((s-1)/(m-1));
        cout<<s<<endl;
    }
    return 0;
}