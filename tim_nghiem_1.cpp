#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int count = 0;
    
    if( a + b == c)
    {
        count++;
    }
    if (a*a + b*b == c*c)
    {
        count++;
    }
    cout<<count;
    return 0;
}

