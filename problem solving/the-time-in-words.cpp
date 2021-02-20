#include<iostream>
using namespace std;
int main()
{
    int h,m;cin>>h>>m;
    char a[30][20]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine"};
    if(m==0)        cout<<a[h-1]<<" o' clock"; 
    else if(m>30)
    {
        if(m==45)       cout<<"quarter to "<<a[h];
        else if(m==59)      cout<<a[60-m-1]<<" minute to "<<a[h];
        else        cout<<a[60-m-1]<<" minutes to "<<a[h];
    } 
    else
    {
        if(m==1)        cout<<a[m-1]<<" minute past "<<a[h-1];
        else if(m==15)      cout<<"quarter past "<<a[h-1];
        else if(m==30)      cout<<"half past "<<a[h-1];
        else        cout<<a[m-1]<<" minutes past "<<a[h-1];
    } 
   return 0;
}