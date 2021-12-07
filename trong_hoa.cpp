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
    int a,b;
    int count=0;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            a=i;
            break;
        }      
    }
    for(int i=s.size(); i>0; i--)
    {
        if(s[i]=='1')
        {
            b=i;
            break;
        }
    }
    for(int i=a; i<b; i++)
    {
        if(s[i]=='0')
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
