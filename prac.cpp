#include<iostream>
using namespace std;
void changenumber(int &number);
main()
{
    int number = 10;
    changenumber(number);
    cout<<"After function: "<<number<<endl;
}

void changenumber(int &number)
{
    number++;
    cout<<"In function: "<<number<<endl;
}