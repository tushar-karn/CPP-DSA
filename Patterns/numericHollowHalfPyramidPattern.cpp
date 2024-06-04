#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter Rows " << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == rows - 1 || i == rows - 1 || j == i)
            {
                cout << j + 1;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}