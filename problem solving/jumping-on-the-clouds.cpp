#include<iostream>
using namespace std;
int main()
{
    int n,c=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=2;i<=n;i+=2)
    {
        if(a[i]==1)
        {
            c++;i--;
        }
        else        c++;
    }
    cout<<c<<endl;
    return 0;
}