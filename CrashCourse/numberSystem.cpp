#include <iostream>
using namespace std;

// decimalToBinary method 1 division;
int decimalToBinary(int n)
{
    int binaryNo = 0;
    int placeValue = 1; // Start with 1, 10, 100, etc.

    while (n > 0)
    {
        int bits = n % 2;
        binaryNo = bits * placeValue + binaryNo;
        placeValue *= 10; // Shift place value to the next decimal place
        n /= 2;
    }
    return binaryNo;
}

// decimalToBinary method 2 Bitwise;

int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    int ans = decimalToBinary(n);
    cout << "Binary representation: " << ans << endl;
    return 0;
}
