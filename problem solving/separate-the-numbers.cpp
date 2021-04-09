#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,a,b;
    cin.ignore(256,'\n');
    while(cin>>str)
    {
        for(int i=1;i<=str.size()/2&&str!=a;i++)
        {
            a=b=str.substr(0,i);
            for(int j=1;a.size()<str.size();j++)
                a+=to_string(stoll(b)+j);
        }
        cout<<(str==a?"YES"+b:"NO")<<endl;
    }
    return 0;
}