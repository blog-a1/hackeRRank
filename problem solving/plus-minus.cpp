#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,c1=0,c2=0,c3=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)    
    {
        cin>>a[i];
        if(a[i]>0)  c1++;
        else if(a[i]<0) c2++;
        else    c3++;
    }
    cout<<setprecision(6)<<(float)c1/n<<endl<<setprecision(6)<<(float)c2/n<<endl<<setprecision(6)<<(float)c3/n<<endl;
    return 0;
}
