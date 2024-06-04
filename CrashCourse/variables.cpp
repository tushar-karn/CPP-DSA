#include <iostream>
using namespace std;
int main()
{
    int age = 25;
    cout << "MY age is " << age << endl;
    int marks;
    cout << "Enter marks" << endl;
    cin >> marks;
    cout << "Marks is " << marks << endl;

    int budegt;
    cout << "Enter your budget !" << endl;
    cin >> budegt;
    if (budegt > 2000000)
    {
        cout << "YOU can buy Scorpio N" << endl;
    }
    return 0;
}