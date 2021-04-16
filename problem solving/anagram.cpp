#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int q;cin>>q;
    while(q--)
    {
        string s,s1,s2;cin>>s;
        int l=s.length(),c=0;
        if(l%2==0)
        {
            s1=s.substr(0,l/2);
            s2=s.substr(l/2,l-1);
            for(int i=0;i<s1.length();i++)
            {
                int n=s2.find(s1[i]);
                if(n==-1)       c++;
                else        s2.erase(n,1);
            }
            cout<<c<<endl;
        }
        else        cout<<-1<<endl;
    }
    return 0;
}