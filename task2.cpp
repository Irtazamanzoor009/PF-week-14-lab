#include<iostream>
using namespace std;
main()
{
    int number = 10;
    int *p = &number;
    cout<<"The adress of number is: "<<p<<endl;
    cout<<"The value is: "<<*p<<endl;
}