#include <iostream>
using namespace std;

int sumavg(int arr[])
{
    int sum = 0;
    int count = 0;
    int avg;
    for(int i=0;i<5;++i){
        sum += arr[i];
        count++; 
    }
    avg = sum/count;
    cout<<"Sum of array: "<<sum<<endl;
    cout<<"avg of array: "<<avg<<endl;
    return 0;
}

int main()
{
    int arr1[5];
    cout<<"Enter 5 int in array: ";
    for(int j=0;j<5;j++)
    {
        cin>>arr1[j];
    }
    sumavg(arr1);
}