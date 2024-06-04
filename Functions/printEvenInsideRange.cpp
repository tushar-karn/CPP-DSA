#include <iostream>
using namespace std;

void printEvenInsideRange(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (!(i & 1))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int start, end;
    cin >> start >> end;
    printEvenInsideRange(start, end);
}