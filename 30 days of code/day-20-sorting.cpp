#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,s=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<n-1;j++)
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);s++;
            }
    cout<<"Array is sorted in "<<s<<" swaps."<<endl<<"First Element: "<<a[0]<<endl<<"Last Element: "<<a[n-1]<<endl;s=0;
    return 0;
}