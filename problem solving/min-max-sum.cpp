#include<iostream>
using namespace std;
int main()
{
    unsigned long long a[5],temp,s1=0,s2=0;
    for(int i=0;i<5;i++)    cin>>a[i];
    for(int j=0;j<5;j++)
        for(int k=j+1;k<5;k++)
            if(a[k]<a[j])
            {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
            }
    for(int l=0;l<5-1;l++)      s1+=a[l];
    for(int m=1;m<5;m++)       s2+=a[m];
    cout<<s1<<" "<<s2<<endl;
    return 0;   
}
