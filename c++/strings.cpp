#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b; char t1,t2;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    t1=a[0];t2=b[0];
    b[0]=t1;a[0]=t2;
    cout<<a<<" "<<b;
    return 0;
}
