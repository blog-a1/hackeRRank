#include<iostream>
using namespace std;
int main()
{
    int t,n,k,c,r;cin>>t;
    while(t--)
    {
        cin>>n>>k;int m=0;
        for(int i=1;i<n;i++)
            for(int j=i+1;j<=n;j++)
            {
                r=i&j;
                if((r>m)&&(r<k))        m=r;       
            }
        cout<<m<<endl;
    }
    return 0;
}