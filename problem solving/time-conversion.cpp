#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int h,m,s;char c,ch;
    cin>>h>>ch>>m>>ch>>s>>c>>ch;
    h=(c=='P')?((h==12)?12:h+12):((h==12)?0:h);
    cout<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<setw(2)<<setfill('0')<<endl;
    return 0;
}