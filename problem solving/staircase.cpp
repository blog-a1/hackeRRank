#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    for(int i=1;i<=n;i++)
    {
        string a(i,'#');
        string b(n-i,' ');
        cout<<b<<a<<endl;
    }
    return 0;
}