#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    string s1,s2,s3,s4,s;
    cin>>s1;
    cin>>s2;
    cin>>s3;
    
    
    
    for (int i=0; i<3; i++)
    {
        cin>>s[i];
        if(s[i] == '1'){
            s4 += s1;
        }else if(s[i] == '2'){
            s4 += s2;
        }else{
            s4 += s3;
        }
            
    }
    for (int i=s4.size()-1; i>=0; i--)
    {
        cout<<s4[i];
    }
    
    return 0;
}

