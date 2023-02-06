#include <iostream>
using namespace std;

void printmin(int arr[5])
{
    int min = arr[0];

    for(int i=0;i<5;i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout<<"Min no. in arry is "<<min<<endl;
}

int main()
{
    int arr1[5];
    cout<<"Enter 5 int in array: ";
    for(int j=0;j<5;j++)
    {
        cin>>arr1[j];
    }
    printmin(arr1);
}