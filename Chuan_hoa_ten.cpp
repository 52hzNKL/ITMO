#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    string name;
    getline(cin, name);
    
    
    //xoa ki tu dac biet
    int t = name.length();
    for (int i=0; i<t; i++)
    {
        if (name[i]>32 && name[i] < 65 || name[i]>90 && name[i] < 97 || name[i]> 122)
        {
            name.erase(name.begin() + i);
            i--;
        }
    }
    
    
    //xoa dau cach thua
    t = name.length();
    while (name[t-1] == 32)
    {
        name.erase(name.begin() + t-1);
        t--;
    }
    while (name[0] == 32)
    {
        name.erase(name.begin());
        t--;
    }
    for (int i=1; i<t; i++)
    {
        if(name[i] == 32)
        {
            while (name[i+1] == 32)
            {
                name.erase(name.begin() + i + 1);
                t--;
            }
        }
    }
    
    
//viet hoa dau ten
    t = name.length();
    if(name[0] > 96)
    {
        name[0] -= 32;
    }
    //hoa
    for (int i=1; i<t; i++)
    {
        if(name[i] == 32 && name[i+1] >97)
        {
            name[i+1] = name[i+1] - 32;
        }
    }
    //thuong
    for(int i=1; i<t; i++)
    {
        if(name[i] < 97 && name[i] != 32)
        {
            name[i] += 32;
        }
        else if (name[i] == 32)
        {
            break;
        }
    }
    for (int i=1; i<t; i++)
    {
        if(name[i] < 97 && name[i] == 32 )
        {
            for(int j = i+2; j<t; j++)
            {
                if(name[j] < 97 && name[j] != 32)
                {
                    name[j] += 32;
                }
                else if(name[j] == 32)
                {
                    break;
                }
            }
        }
    }
    
    // Dao ten
    string daoName;
    int a,b;
    for (int i=0; i<t; i++)
    {
        if(name[i] == 32)
        {
            a=i;
            break;
        }            
    }
    daoName = name.substr(0, a);
    for (int i=t-1; i>=0; i--)
    {
        if(name[i] == 32)
        {
            b = i;
            daoName += name.substr(i, t-i);    
            break;        
        }
    }
    daoName += name.substr(a, b-a);

    
    
    
    //in chuoi
    for(int i=0; i<daoName.length(); i++)
    {
        cout<<daoName[i];
    }
    
    return 0;
}

