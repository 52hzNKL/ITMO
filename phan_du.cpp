#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long double a,b;
    cin>>a>>b; 
    a = abs(ceil(a));
    b = abs(ceil(b));
    long long x = a, y = b;
    cout<<x%y;
    return 0;
}

