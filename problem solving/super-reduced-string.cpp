#include<iostream>
using namespace std;
int main()
{
    string str;cin>>str;
    for(int i=0;i<(((int)str.length())-1);i++)
        if(str[i]==str[i+1])
        {
            str.erase(i,2);i=-1;
        }
    cout<<(str.empty()?"Empty String":str);
    return 0;
}