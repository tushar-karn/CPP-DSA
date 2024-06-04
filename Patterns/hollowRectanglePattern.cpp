#include <iostream>
using namespace std;
int main()
{
    int rows, cols;
    cout << "Enter Rows " << endl;
    cin >> rows;
    cout << "Enter Cols " << endl;
    cin >> cols;

    // 1st approach

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // second approach

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << "* ";
            }
            else
            {
                if (j == 0 || j == cols - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}