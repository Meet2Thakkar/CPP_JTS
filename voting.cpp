#include <iostream>
using namespace std;

int main()
{
    while(true)
    {
    int age;
    cout<<"\n"<<"Enter your age: ";
    cin>>age;
    if (age>18)
    {
        cout<<"eligible to vote";
        break;
    }
    else
    {
        cout<<"not eligible";
        break;
    }
    }
}