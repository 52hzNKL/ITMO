#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long a,b;
    cin>>a>>b;
    long UC;
	long long int BC;
    
    if(a==b)
    {
        cout<<a<<' '<<a;
    }
    else if (a%b == 0)
    {
        cout<<b<<' '<<a;
    }
    else if (b%a == 0)
    {
        cout<<a<<' '<<b;
    }
    else if (a>b)
    {
       for(int i=1; i<sqrt(a); i++)
       {
           if(a%i == 0 && b%i ==0)
           {
               UC = i;
           }
       }
        BC = (a/UC)*b;
        cout<<UC<<' '<<BC;
    }
    else
    {
        for(int i=1; i<sqrt(b); i++)
       {
           if(b%i == 0 && a%i ==0)
           {
               UC = i;
           }
       }
        BC = (b/UC)*a;
        cout<<UC<<' '<<BC;
    }
    
    return 0;
}

