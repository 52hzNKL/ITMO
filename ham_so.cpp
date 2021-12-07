#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int SNT(int x);
int f(int x);
int main() {
    int m,n;
    cin>>n>>m;   
    cout<<f(f(n) + f(m));
    return 0;
}
int SNT(int x){
    int count = 0;
    
    if(x<2)
    {
        count--;
    }
    
    for(int i=1; i<=sqrt(x); i++)
    {
        if(x%i == 0)
        {
            count++;
        }
    }
    if(count == 1)
    {
        return x;
    }
    return 0;
}
int f(int x){
    int sum=0;
    for(int i=0; i<x; i++)
    {
        sum += SNT(i);
    }
    return sum;
}

