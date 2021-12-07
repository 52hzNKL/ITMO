#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y,p,q;
    cin>>x>>y>>p>>q;
    int LY;
    
    //kiem tra hang doc va hang ngang
    if(p==x || q==y )
        {
            if (p==x && q==y)
            {
                LY = 2;
            }
            else
            {
                LY = 1;
            }
        }

    //kiem tra hang cheo
    if (abs(x-p)==abs(y-q) && x != p)
    {
        LY = 1;
    }

    if(LY == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    return 0;
}

