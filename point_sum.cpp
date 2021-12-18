#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int sum(int *p, int n);
int main() {
    int n;
    cin>>n;
    int *p;
    int a[n];
    p = a;
    
    for(int i=0; i<n; i++)
    {
        cin>>*(p+i);
    }
    cout<<sum(p, n);
    return 0;
}
int sum(int *p, int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += *p;
        p++;
    }    
    return sum;
}
