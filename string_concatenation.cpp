#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    string s1,s2,s3,s;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);    
    
    
    for (int i=0; i<3; i++)
    {
        cin>>s[i];
        if(s[i] == '1'){
            cout<<s1<<endl;
        }else if(s[i] == '2'){
            cout<<s2<<endl;
        }else{
            cout<<s3<<endl;
        }
            
    }
    
    return 0;
}
