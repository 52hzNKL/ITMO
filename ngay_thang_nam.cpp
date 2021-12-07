#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    long c;
    cin>>a>>b>>c;
    
    if(a == 30)
    {
        if( b == 2 || b == 4 || b == 6 || b == 9 || b == 11)
        {
            cout<<'1'<<' '<<b+1<<' '<<c;
        }
        else
        {
            cout<<a+1<<' '<<b<<' '<<c;
        }
    }
    else if(a == 31)
    {
        if(b==12)
        {
            cout<<'1'<<' '<<'1'<<' '<<c+1;
        }
    
        else
        {
            cout<<'1'<<' '<<b+1<<' '<<c;
        }
    }
    else if(b == 2)
    {
        if(c%4 != 0 && a==28)
        {
            cout<<'1'<<' '<<b+1<<' '<<c;
        }
        else if(c%4 == 0 && a==29)
        {
            cout<<'1'<<' '<<b+1<<' '<<c;
        }
        else
        {
            cout<<a+1<<' '<<b<<' '<<c;
        }
    }
    else
    {
        cout<<a+1<<' '<<b<<' '<<c;
    }
    return 0;
}

