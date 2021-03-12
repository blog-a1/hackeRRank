#include<iostream>
using namespace std;
int main()
{
    int n,r=0,c=0,m=0;cin>>n;
    while(n>0)
    {
        r=n%2;
        n/=2;
        if(r==1)
        {
            c++;
            if(c>=m)        m=c;
        }
        else        c=0;
    }
    cout<<m<<endl;
    return 0;
}