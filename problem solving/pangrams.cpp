#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str="abcdefghijklmnopqrstuvwxyz";
    string s;getline(cin,s);
    transform(s.begin(),s.end(),s.begin(),::tolower);
    sort(s.begin(),s.end());
    s.erase(remove_if(s.begin(),s.end(),::isspace),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());
    if(s==str)      cout<<"pangram"<<endl;
    else        cout<<"not pangram"<<endl;
    return 0;
}