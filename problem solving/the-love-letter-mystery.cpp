#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int q,n,c;cin>>q;
    while(q--)
    {
        string s;cin>>s;c=0;
        n=s.length();
        for(int i=0,j=n-1;i<n/2;i++,j--)
            c+=abs(s[i]-s[j]);
        cout<<c<<endl;
    }
    return 0;
}