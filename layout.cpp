#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    int count = 0;
    
    if((s[0]-97) < (26+97-s[0]))
    {
        count += s[0]-97;
    }
    else
    {
        count += abs(abs(s[0]-97) - 26);
    }
    
    for(int i=1; i<s.size(); i++)
    {
        if((abs(s[i]-s[i-1])) < (26-abs(s[i-1]-s[i])))
        {
            count += abs(s[i] - s[i-1]);
        }
        else
        {
            count += abs(abs(s[i]-s[i-1]) - 26); 
        }        
    }
    cout<<count;
    return 0;
}

