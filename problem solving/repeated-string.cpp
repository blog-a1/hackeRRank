#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100];long long int n,m,a,c=0;cin>>s>>n;
    a=strlen(s);
    for(int i=0;s[i]!='\0';i++)
        if(s[i]=='a')       c++;
    m=n;m/=a;m*=c;n%=a;
    for(int i=0;i<n;i++)
        if(s[i]=='a')       m++;
    cout<<m<<endl;
    return 0;
}