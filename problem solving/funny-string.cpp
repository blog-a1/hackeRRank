#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int q;cin>>q;
    while(q--)
    {
        string str,r;cin>>str;int c=0;r=str;
        reverse(r.begin(),r.end());
        for(int i=1;i<str.length();i++)
        {
            if(abs(str[i]-str[i-1])!=abs(r[i]-r[i-1]))
            {
                cout<<"Not Funny"<<endl;
                c++;break;
            }
        }
        if(c==0)        cout<<"Funny"<<endl;
    }
    return 0;
}