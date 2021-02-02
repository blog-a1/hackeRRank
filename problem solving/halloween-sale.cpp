#include<iostream>
using namespace std;
int main()
{
    int p,d,m,s,c=0,n=0;cin>>p>>d>>m>>s;
    while(1)
    {
        n+=p;
        if(n<=s)
        {
            c++;
            if(p-d>=m)      p-=d;
            else        p=m;
        }
        else        break;
    }
    cout<<c<<endl;
    return 0;
}