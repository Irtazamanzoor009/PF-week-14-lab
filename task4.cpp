#include<iostream>
using namespace std;
int avg(int arr[], int size);
main()
{
    int size = 3;
    int arr[size] = {1,2,3};
    float result = avg(arr, size);
    cout<<"Average is: "<<result<<endl;
}

int avg(int arr[], int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }
    return sum/size;
}