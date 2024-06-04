#include <iostream>
#include <cmath>

using namespace std;

void printNumbers()
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int multiplyNumbers(int a, int b, int c)
{
    return a * b * c;
}
void printName(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << "Tushar Karn" << " ";
    }
    cout << endl;
}

double celsiusToFahrenheit(double celsius)
{
    return (9 / 5) * celsius + 32;
}

int countingNumbers()
{
    for (int i = 1; i <= 100; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

double simpleIntrestCalculator(double Principal, double Rate, double Time)
{
    return (Principal * Rate * Time) / 100;
}

bool printPrimeTill100(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) // <-- Check up to sqrt(n)
    {
        if (n % i == 0) // <-- Check for divisibility
        {
            return false;
        }
    }
    return true;
}

bool checkEligibleForVoting(int age)
{
    if (age >= 18)
    {
        return true;
    }
    return false;
}

int main()
{
    printNumbers();
    cout << multiplyNumbers(3, 4, 5) << endl;
    printName(10);
    cout << celsiusToFahrenheit(101) << endl;
    cout << simpleIntrestCalculator(100000, 5, 2) << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (printPrimeTill100(i))
        {
            cout << i << " ";
        }
    }

    int age;
    cout << "Enter your Age ! " << endl;
    cin >> age;
    if (checkEligibleForVoting(age))
    {
        cout << "Elegible for voting" << endl;
    }
    else
    {
        cout << "Not Elegible wait for " << (18 - age) << " years" << endl;
    }

    return 0;
}