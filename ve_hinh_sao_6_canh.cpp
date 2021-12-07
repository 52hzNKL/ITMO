#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int m = (3*n)/4;
    char a[n][2*n+1];
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n+1; j++)
        {
            a[i][j]=' ';
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=m-i; j<(m-i)+(i*2+1); j++) {a[i][j-1]='*';} 
    }
    for(int i=n/4; i<n; i++)
    {
        for(int j=i-n/4; j<2*m-1-i+n/4; j++) {a[i][j]='*';} 
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2*n+1; j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    
    
    return 0;
}

