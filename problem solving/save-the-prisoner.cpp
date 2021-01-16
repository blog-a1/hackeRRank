#include<iostream>
using namespace std;
int main()
{
    int t,m,n,s;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>m>>s;
        ((m+s-1)%n==0)?cout<<n<<endl:cout<<(m+s-1)%n<<endl;
    }
    return 0;
}