#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int i=4;
    double d=4.0;
    string s="HackerRank ";
    int a;double b;string c;
    cin>>a>>b;cin.ignore();getline(cin,c);
    cout<<i+a<<endl<<setprecision(1)<<fixed<<d+b<<endl<<s+c<<endl;
    return 0;
}