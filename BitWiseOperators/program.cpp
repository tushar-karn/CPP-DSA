#include <iostream>
using namespace std;
int main()
{
    cout << (5 & 1) << endl;
    cout << (5 & 3) << endl;
    cout << (5 | 3) << endl;
    cout << ~(5) << endl;
    cout << (5 ^ 5) << endl;
    cout << (5 ^ 5 ^ 9) << endl;
    cout << (25 << 1) << endl;
    cout << (25 << 2) << endl;
    cout << ((-10) << 1) << endl;
    cout << ((-10) << 2) << endl;
    cout << ((25) >> 1) << endl;
    cout << ((20) >> 3) << endl;
    cout << ((-1000) >> 1) << endl;

    int n = 10;
    if (n & 1)
    {
        cout << "ODD" << endl;
    }
    else
    {
        cout << "EVEN" << endl;
    }

    int num = 15;
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num = num >> 1;
    }
    cout << count << endl;
}