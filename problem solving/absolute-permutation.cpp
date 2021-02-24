#include <iostream>
using namespace std;
int main()
{
    int t,n,k;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;
        if(k==0)
            for(int i=1;i<=n;i++)       cout<<i<<" ";
        else if(n%(2*k)!=0)      cout<<-1;
        else
        {
            int a[n],j=1;
            while(j<=n)
            {
                for(int i=0;i<k;i++)
                {
                    a[j]=j+k;j++;
                }
                for(int i=0;i<k;i++)
                {
                    a[j]=j-k;j++;
                }
            }
            for(int i=1;i<=n;i++)       cout<<a[i]<<" ";     
        }
        cout<<endl;
    }
    return 0;
}