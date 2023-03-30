#include <iostream>
using namespace std;
void rotate(int arr[], int size, int rotaion);
main()
{
    int size = 10;
    int rotation;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << "Enter the rotation: ";
    cin >> rotation;
    rotate(arr, size, rotation);
}

void rotate(int arr[], int size, int rotation)
{
    int newarr[size];
    for (int i = 0; i < size; i++)
    {
        // cout << arr[i + rotation];
        newarr[i] = arr[i + rotation];
        if (arr[i] == size - rotation)
        {
            for (int j = 0; j < rotation; j++)
            {

                cout << arr[j] <<" ";
                newarr[i + rotation] = arr[j];
            }
            break;
        }
        
            cout << newarr[i] << " ";
        
    }
}