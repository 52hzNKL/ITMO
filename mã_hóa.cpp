#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    int k;
    string s,t;
    cin>>k>>s;
    
    
    if(k>=s.length())
    {
        k=k%s.length();
    }  
    s += s.substr(0, k);
    
    cout<<s.substr(k);
    
    return 0;
}
