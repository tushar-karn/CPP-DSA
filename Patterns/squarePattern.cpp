#include <iostream>
using namespace std;
int main()
{
    // outer loop 4 -> rows
    for (int i = 0; i < 4; i++)
    {
        // inner loop -> 4 star print

        for (int j = 0; j < 4; j++)
        {
            cout << "* ";
        }
        // move to next line
        cout << endl;
    }
}