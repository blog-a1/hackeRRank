#include<iostream>
using namespace std;
int main()
{
    int a[26],m=0;string word;
    for(int i=0;i<26;i++)        cin>>a[i];
    cin>>word;
    for(char ch:word)       
        if(a[(int)ch-97]>m)     m=a[(int)ch-97];
    cout<<m*word.size()<<endl;
    return 0;
}