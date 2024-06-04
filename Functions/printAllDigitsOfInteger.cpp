#include <iostream>
using namespace std;

void printAllDigitsOfInteger(int num)
{
    while (num > 0)
    {
        int ans = 0;
        ans = num % 10;
        cout << ans << endl;
        num /= 10;
    }
}

int main()
{
    int num;
    cout << "Enter A Number" << endl;
    cin >> num;
    printAllDigitsOfInteger(num);
    return 0;
}