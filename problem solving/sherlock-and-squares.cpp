#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int q,a,b,n,c=0;
    for(cin>>q;q>0;q--)
    {
        cin>>a>>b;
        for(int i=sqrt(a);i<=sqrt(b);i++)
        {
            if(i*i>=a&&i*i<=b)      c++;
        }
        cout<<c<<endl;c=0;
    }
    return 0;
}