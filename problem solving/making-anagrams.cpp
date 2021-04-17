#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;cin>>s1>>s2;
    for(int i=0;i<s1.length();i++)
        for(int j=0;j<s2.length();j++)
            if(s1[i]==s2[j])
            {
                s1.erase(i,1);
                s2.erase(j,1);
                i=0;j=0;
            }
    cout<<s1.length()+s2.length()<<endl;
    return 0;
}