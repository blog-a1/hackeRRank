#include<iostream>
using namespace std;
int main()
{
    long    int t,b,w,bc,wc,z;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>b>>w>>bc>>wc>>z;
        if(bc>wc+z)     cout<<b*(wc+z)+w*wc<<endl;
        else if(wc>bc+z)        cout<<b*bc+w*(bc+z)<<endl;
        else        cout<<b*bc+w*wc<<endl;
    }
    return 0;
}
