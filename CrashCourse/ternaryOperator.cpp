#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    (age >= 18) ? cout << "Can Vote " << endl : cout << "Cannot vote " << endl;
}