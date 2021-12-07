#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    
    
    if(n<m)
    {
        int a[m][n];
        for(int i = 0; i<m; i++)
        {
        for(int j=0; j<n; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        } 
    }
    else
    {
        int b[n][m];
        for(int i = 0; i<n; i++)
        {
        for(int j=0; j<m; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
        } 
    }
    
    
    return 0;
}

