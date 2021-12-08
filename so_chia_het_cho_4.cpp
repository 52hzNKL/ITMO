#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdlib.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    string a;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        if(a.length()<2)
        {
            int c = atoi(a.c_str());
            c = c % 100;
            if(c%4 == 0)
            {
                cout<<"true";
             }
            else
            {
                cout<<"false";
            }
             cout<<"\n";
       }
       else
       {
    	a = a.substr(a.length() - 2, 2);
        int c = atoi(a.c_str());
        c = c % 100;
        if(c%4 == 0)
        {
            cout<<"true";
        }
        else
        {
            cout<<"false";
        }
         cout<<"\n";
      	}
        
    }

    
    return 0;
}

