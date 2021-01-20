#include<iostream>
using namespace std;
int main()
{
    int t,n,a,c=0;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;a=n;
        while(a>0)
        {   
            if(a%10!=0&&n%(a%10)==0)      c++;
            a/=10;
        }
        cout<<c<<endl;c=0;
    }
    return 0;
}