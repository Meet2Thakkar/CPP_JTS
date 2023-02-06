#include <iostream>
using namespace std;

int swap(int a,int b)
{
    int *p1 = &a;
    int *p2 = &b;   
    *p1=*p1+*p2;    
    *p2=*p1-*p2;    
    *p1=*p1-*p2;
    cout<<"p = "<<*p1<<" q = "<<*p2;  
    return 0;
}

int main()
{
    int p = 7;
    int q = 86;
    swap(p,q);
}