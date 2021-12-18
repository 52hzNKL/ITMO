#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int min(int a[], int n);
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
//TBC    
    double average = 0;
    for(int i=0; i<n; i++)
    {
        average += a[i];
    }
    average = average/n;
//2nd min    
    int Min = min(a, n);
    for (int i=0; i<n; i++)
    {
        if(a[i] == Min)
        {
            for(int j = i; j < n - 1; j++){
            a[j] = a[j+1];
            }
            --n;
            i--;
        }        
    }
    cout<<min(a, n)<<endl;
    cout<<setprecision(3)<<fixed<<average;
    
    
    return 0;
}
int min(int a[], int n)
{
    int min = a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

