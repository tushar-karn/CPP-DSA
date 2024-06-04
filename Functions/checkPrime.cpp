#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
    {
        return false; // Numbers less than or equal to 1 are not prime
    }
    if (num == 2)
    {
        return true; // 2 is a prime number
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false; // Found a divisor, not a prime number
        }
    }
    return true; // No divisors found, it's a prime number
}

int main()
{
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}
