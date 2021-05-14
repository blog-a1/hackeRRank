#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,s=0;cin>>n;
        vector<int>v(n);
        for(auto &a:v)
        {
            cin>>a;s+=a;
        }
        int c=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(s-v[i]==c)
            {
                d++;break;
            }
            else
            {
                c+=v[i];s-=v[i];
            }
        }
        if(d==0)    cout<<"NO"<<endl;
        else    cout<<"YES"<<endl;
    }
    return 0;
}