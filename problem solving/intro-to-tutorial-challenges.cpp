#include<iostream>
using namespace std;
int main()
{
    int v,n;cin>>v>>n;int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
    {
        if(a[j]==v)
        {
            cout<<j<<endl;break;
        }
    }
    return 0;
}