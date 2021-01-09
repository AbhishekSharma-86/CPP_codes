#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
       int n;
    cin>>n;
    int a[n];
    int i;
    for ( i=0; i<n; i++){
        cin>>a[i];
    }
    
   
    for (i=0;i<n;i++){
    cout<<a[n-i-1]<<endl;
    }
    return 0;
}
