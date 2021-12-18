#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool check(int *p, int n);
int main() {
    int n;
    cin>>n;
    int a[n];
    int *p;
    p = a;
    
    for(int i=0; i<n ;i++)
    {
        cin>>*(p+i);
    }
      
    if (check(p, n) == 1)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
bool check(int *p, int n)
{
    int inc = 0;
    int red = 0;
    
    for(int i=0; i<n; i++)
    {
        if(*p < *(p+i))
        {
            inc ++;
        }
        else if (*p > *(p+i))
        {
            red ++;
        }
    }
    if(inc == n-1)
    {
        return true;
    }
    else if (red == n-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

