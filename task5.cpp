#include <iostream>
using namespace std;
int formula(int row, int col);
int count(int matrix[][3], int row);
main()
{
    int row = 3;
    int col = 3;
    int matrix[row][3] = {{1, 0, 3},
                            {1, 0, 0},
                            {1, 0, 3}};
    int compare = formula(row, col);
    int countzero = count(matrix, row);
    if (countzero >= compare)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

int formula(int row, int col)
{
    int result = (row * col) / 2;
    return result;
}

int count(int matrix[][3], int row)
{
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (matrix[i][j] == 0)
            {
                count++;
            }
        }
    }
    return count;
}