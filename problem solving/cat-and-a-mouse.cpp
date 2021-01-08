#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int n,x,y,z,a,b,c;cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        a=(z-x>0)?z-x:x-z;
        b=(z-y>0)?z-y:y-z;
        if(a<b&&a!=z)       cout<<"Cat A"<<endl;
        else if(b<a&&b!=z)      cout<<"Cat B"<<endl;
        else if(a==b)       cout<<"Mouse C"<<endl;      
    }
    return 0;
}