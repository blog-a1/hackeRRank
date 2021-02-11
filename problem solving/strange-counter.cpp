#include<iostream>
using namespace std;
int main()  
{  
    long long int t,v=3;cin>>t;
    while(t-v>0)
    {
        t-=v;v*=2;
    }
    cout<<v-t+1<<endl;
    return 0; 
}