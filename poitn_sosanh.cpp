#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sosanh(int *a, int *b);
int main() {
    int x,y;
    sosanh(&x, &y);
    
    return 0;
}
void sosanh(int *a, int *b)
{
    if(*a>*b)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}

