#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int count = 0;
    
    if (n<2)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i == 0)
        {
            count += 1;
        }
    }
    if(count == 1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
