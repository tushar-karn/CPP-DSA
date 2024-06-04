#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout << "Enter No Of Rows" << endl;
    cin >> rows;
    int k = rows;
    for (int i = 0; i < rows; i++)
    {
        int c = 1;
        for (int j = 0; j < k; j++)
        {
            if (j < rows - i - 1)
            {
                cout << " ";
            }
            else
            {
                cout << c;
                c++;
            }
        }
        k++;
        cout << endl;
    }

    return 0;
}