#include <iostream>
using namespace std;
int main()
{
    cout << (~5) << endl;
    // cout<<(5.0f%2); % does not work with float;
    int num = 10;
    cout << num << endl;
    cout << --num << endl;
    cout << num-- << endl;
    cout << num << endl;
    cout << (num << 1) << endl;
    num += 1;
    num *= 2;
    num %= 2;
    ++num;
    cout << num << endl;
    return 0;
}