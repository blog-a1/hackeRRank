#include<iostream>
using namespace std;
int main()
{
    int n,c=0;cin>>n;int b[n];
    for(int i=0;i<n;i++)        cin>>b[i];
    for(int i=0;i<n-1;i++)
        if(b[i]%2!=0)
        {
            b[i]+=1;b[i+1]+=1;c+=2;
        }
    (b[n-1]%2==0)?cout<<c:cout<<"NO";
    return 0;
}