#include<iostream>
#include<map>
using namespace std;
int main()
{
    long t,p;cin>>t;string n;
    map<string,long>m;
    for(int i=0;i<t;i++)
    {
        cin>>n>>p;m[n]=p;
    }
    while(cin>>n)
    {
        if(m.find(n)!=m.end())      cout<<n<<"="<<m.find(n)->second<<endl;
        else        cout<<"Not found"<<endl;
    }
    return 0;
}
