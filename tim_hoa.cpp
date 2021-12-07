#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int n;
    char x;
    string a;
    cin>>n;
    cin>>x;
    cin>>a;

    
    for(int i = 0; i<n; i++)
    {
        if(a[i]==x)
        {
            cout<<i+1;
            return 0;
        }
    }
    return 0;
}

