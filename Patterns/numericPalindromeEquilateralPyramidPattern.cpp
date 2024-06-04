#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter no of rows" << endl;
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i - 1; j++)
        {
            cout << "  ";
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1 << " ";
        }

        for (int j = i - 1; j >= 0; j--)
        {
            cout << j + 1 << " ";
        }

        cout << endl;
    }

    return 0;
}