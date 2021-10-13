#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i;
    cin>>n;
    int a[n];
    for(i=1; i<=n; i++) {
        cin>>a[i];
    }
    for(i=n; i>=1; i--) { cout<<a[i]<<" ";}
    return 0;
}
