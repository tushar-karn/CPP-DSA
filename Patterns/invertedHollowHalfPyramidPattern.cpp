#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter Rows " << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - i; j++)
        {
            if (i == 0 || j == 0)
            {
                cout << "* ";
            }
            else
            {
                if (j == rows - 1 - i)
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
}