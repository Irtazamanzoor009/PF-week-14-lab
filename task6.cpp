#include <iostream>
using namespace std;
void merge(int arr[], int arr1[], int size1, int size2);

main()
{
    int size1 = 3, size2 = 3;
    int arr[size1] = {1, 2, 3};
    int arr1[size2] = {4, 5, 6};
    merge(arr, arr1, size1, size2);
}

void merge(int arr[], int arr1[], int size1, int size2)
{
    int final[size1 + size2];
    int i, j;

    for (i = 0; i < size1; i++)
    {
        final[i] = arr[i];
    }
    for (j = 0; j < size2; j++)
    {
        final[j + size1] = arr1[j];
    }
    cout<<"[";
    for (int x = 0; x < size1 + size2; x++)
    {

        cout << final[x]<<" ";
    }
    cout<<"]";
}