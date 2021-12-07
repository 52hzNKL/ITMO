#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    long double a,b,c,pitago;
    cin>>a>>b>>c;
    
    int max = 0;
    if (a > b )
    {
        max = a;
        pitago= b*b + c*c;
        if ( c > a)
        {
            max = c;
            pitago = a*a + b*b;
        }
    }
    else
    {
        max = b;
        pitago = a*a + c*c;
        if (c > b)
        {
            max = c;
            pitago = a*a + b*b;
        }
    }
    if (max*max == pitago)
    {
        cout<<"tam giac vuong"<<endl;
    }
    else if (max*max < pitago)
    {
        cout<<"tam giac nhon"<<endl;
    }
    else
    {
        cout<<"tam giac tu"<<endl;
    }
    
    
    //chu vi tam giac
    long double p = a + b + c;
    
    //dien tich tam giac
    long double s = sqrt(p/2*(p/2-a)*(p/2-b)*(p/2-c)); //heron
    cout<<fixed<<setprecision(0)<<p;
    cout<<" ";
    cout<<fixed<<setprecision(3)<<s;
    
    return 0;
}

