#include <iostream>
using namespace std;

void swap(int *a, int *b);
void Max3(int a, int b, int c, int *Max);
void sort(int *a, int *b, int *c);
void normalize(int *a);
int main()
{
	int d,e,f;
	cin>>d>>e>>f;
	int *a, *b, *c;
	a = &d;
	b = &e;
	c = &f;
//swap	
	swap(a, b);
	cout<<*a<<' '<<*b<<endl;
//max	
	int ansMax;
    Max3(d, e, f, &ansMax);
    cout << ansMax<<endl;
//sort   
	sort(a, b, c);
	cout<<*a<<' '<<*b<<' '<<*c<<endl;
//normalize	
	normalize(a);
	cout<<*a;
	return 0;
}
void swap(int *x, int *y) {
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
void Max3(int a, int b, int c, int *Max) {
    *Max = a;
    if(b > a)
    {
        *Max = b;
        if( c > b )
        {
            *Max = c;        
        }
    }
    else
    {
        if(c>a)
        {
            *Max = c;
        }    
    }    
}
void sort(int *a, int *b, int *c) {
    for(int i =0; i<3; i++)
    {
        if(*a > *b)
        {
           swap(a, b);
           if(*a > *c)
           {
               swap(a, c);
           }
         }
         else
         {
              if(*b > *c)
              {
                   swap(b, c);
              }
          }
    }
}
void normalize(int *a) {
    if (*a>0 && *a%2 == 0)
    {
       *a = *a/2;
       normalize(a);
    }
}

