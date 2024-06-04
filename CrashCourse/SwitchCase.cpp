#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;

    switch (marks / 10)
    {
    case 10:
        cout << "Grade is O" << endl;
        break;
    case 9:
        cout << "Grade is A+" << endl;
        break;
    case 8:
        cout << "Grade is A" << endl;
        break;
    case 7:
        cout << "Grade is B+" << endl;
        break;
    case 6:
        cout << "Grade is B" << endl;
        break;
    case 5:
        cout << "Grade is C" << endl;
        break;
    default:
        cout << "Fail" << endl;
        break;
    }
}