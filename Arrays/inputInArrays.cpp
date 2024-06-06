#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter Array Elements : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "Array Elements Are : ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}