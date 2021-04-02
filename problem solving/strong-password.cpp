#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    int n,c,d=0,l=0,u=0,s=0;cin>>n;char str[n];cin>>str;
    for(auto i=0;i<n;i++)
    {
        if(isdigit(str[i]))       d=1;
        else if(islower(str[i]))        l=1;
        else if(isupper(str[i]))        u=1;
        else        s=1;
    }
    c=4-(d+l+u+s);
    if(n+c<6)       cout<<6-n<<endl;
    else        cout<<c<<endl;
    return 0;
}