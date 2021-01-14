#include<iostream>
using namespace std;
int main()
{
    long int i,j,k,m,l,s=0,c=0;
    cin>>i>>j>>k;
    while(i<=j)
    {
        l=i;
        while(i!=0)
        {
            s=s*10+(i%10);
            i/=10;
        }
        if((std::abs(s-i))%k==0)   c++;s=0;i++;
    }
    cout<<c<<endl;
    return 0;
}