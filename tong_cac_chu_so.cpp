#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long x;
    cin>>x;

    long sum = x % 10;
    for(int i=1; i<20; i++)
    {
        if (x<10)
        {
            cout<<i<<" ";
            cout<<sum;
            return 0;
        }
        x = x/10^i-i;
        sum += x % 10;
    }
    return 0;
}
