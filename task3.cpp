#include<iostream>
using namespace std;
void swapnumbers(int &number1, int &number2);
main()
{
    int number1 = 10;
    int number2 = 20;
    swapnumbers(number1, number2);
    cout<<"Number 1: "<<number1<<endl;
    cout<<"Number 2: "<<number2<<endl;
}

void swapnumbers(int &number1, int &number2)
{
    int temp = number1;
    number1 = number2;
    number2 = temp;
}