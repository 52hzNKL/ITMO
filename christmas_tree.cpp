#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=1; j<n-i; j++) {cout<<" ";}
        for(int j=0; j<i*2+1; j++) {cout<<"*";}
        for(int j=1; j<n-i; j++) {cout<<" ";}  
        cout<<"\n";
    }
    int than_cay = int(n/4) + int(int(n/4)%2 == 0);
    for(int i=0; i<than_cay; i++)
    {
        for(int j=0; j<n-int(than_cay/2)-1; j++) {cout<<" ";}
        for(int j=0; j<than_cay; j++) {cout<<"*";}
        cout<<"\n";
    }
    
    return 0;
}

