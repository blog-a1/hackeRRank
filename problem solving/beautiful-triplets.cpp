#include<iostream>
#include<algorithm>
using namespace std;
int main()  
{  
    int n,d,k,c=0,s;cin>>n>>d;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        k=a[i];s=1;
        for(int j=0;j<n;j++)
            if((k+d)==a[j])
            {
                s++;k=a[j];
                if(s==3)
                {
                    c++;break;
                }
            }
    }
    cout<<c<<endl;
    return 0; 
}