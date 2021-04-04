#include<iostream>
using namespace std;
int main()
{
    int n;string str;cin>>n>>str>>n;char s;
    for(auto &c:str)
        if(isalpha(c))
        {
            s=isupper(c)?'A':'a';
            c=s+(c-s+n)%26;
        }      
    cout<<str<<endl;
    return 0;
}

