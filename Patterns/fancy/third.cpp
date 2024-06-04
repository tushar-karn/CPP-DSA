#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter Rows " << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << char((ch++));
        }
        ch--;
        while (ch > 'A')
        {
            ch--;
            cout << ch;
        }

        cout << endl;
    }
}