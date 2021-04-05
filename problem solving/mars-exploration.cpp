#include<iostream>
using namespace std;
int main()
{
    string str;cin>>str;int i=0,j=0,c=0;
   char s[3];
    s[0]='S';
    s[1]='O';
    s[2]='S';
    while(str[i])
    {
        if(j==3)        j=0;
        if((str[i])!=(s[j]))        c++;
        i++;j++;
    }
    cout<<c<<endl;
    return 0;
}