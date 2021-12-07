#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int s = n-a;
    if (n<a)
    {
        cout<<1;
    }
    else if (s%(a-b) < (a-b)/2 && s%(a-b) != 0)
    {
        cout<<s/(a-b)+2;
    }
    else
    {
        cout<<s/(a-b)+1;
    }
    return 0;
}
