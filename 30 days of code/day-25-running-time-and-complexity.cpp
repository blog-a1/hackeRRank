#include<iostream>
using namespace std;
int main()
{
    int t,n,s;cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        if(n==1)        cout<<"Not prime"<<endl;
        else
        {
            s=0;
            for(int j=2;j*j<=n;j++)
                if(n%j==0)      s+=1;
            if(s==0)        cout<<"Prime"<<endl;
            else        cout<<"Not prime"<<endl;
        }
    }
    return 0;
}