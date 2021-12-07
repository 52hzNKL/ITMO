#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x,y;
    cin>>x>>y;
    switch (x)
    {
        case 1:
            {
                cout<<"beo";
                break;
            }
        case 2:
            {
                cout<<"trang";
                break;
            }
        case 3:
            {
                cout<<"cao";
                break;
            }
        case 4:
            {
                cout<<"to";
                break;
            }
        case 5:
            {
                cout<<"den";
                break;
            }
        case 6:
            {
                cout<<"lun";
                break;
            }
    }
    switch (y)
    {
        case 1:
            {
                cout<<" hieu thao";
                break;
            }
        case 2:
            {
                cout<<" tham lam";
                break;
            }
        case 3:
            {
                cout<<" rong luong";
                break;
            }
        case 4:
            {
                cout<<" luoi bieng";
                break;
            }
        case 5:
            {
                cout<<" cham chi";
                break;
            }
        case 6:
            {
                cout<<" kieu ngao";
                break;
            }
    }
    return 0;
}

