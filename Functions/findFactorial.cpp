#include <iostream>
using namespace std;
int findFactorial(int num)
{
    int factorial = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int num;
    cout << "Enter A Number To Find Factorial! " << endl;
    cin >> num;
    int ans = findFactorial(num);
    cout << "Factorial of " << num << " is " << ans << " !! " << endl;
}