#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        int m,n;cin>>m>>n;
        int a[n],c=0;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n,c<1;i++)
            for(int j=1;j<=n;j++)
                if(a[i]+a[j]==m&&i!=j)
                {
                    cout<<i<<" "<<j<<endl;
                    c++;
                }
    }
    return 0;
}