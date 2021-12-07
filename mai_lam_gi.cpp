#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x;
    int y;
    cin>>x>>y;
    if(x % 2 == 0 )
    {
        if (y % 2 != 0 )
        {
            cout<<"nghi hoc va goi dau";
        }
        else 
        {
            cout<<"nghi hoc va xem phim";
        }
    }
    else
    {
        if (y % 2 != 0 )
        {
            cout<<"di hoc va khong lam bai";
        }
        else
        {
            cout<<"di hoc va lam bai";
        }
    }
    return 0;
}


