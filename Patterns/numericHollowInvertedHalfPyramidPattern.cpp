#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter No of Rows" << endl;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = i + 1; j <= rows; j++)
        {
            if (j == i + 1 || i == 0 || j == rows)
            {
                cout << j;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}