#include<iostream>
using namespace std;
int main()
{
    int t,n,h=1;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
       if(n==0)     cout<<1<<endl;
       else
       {
            for(int i=1;i<=n;i++)
                (i%2==0)?h+=1:h*=2;
            cout<<h<<endl;h=1;
       }
    }
    return 0;
}