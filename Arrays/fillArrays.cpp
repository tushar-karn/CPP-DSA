#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    fill(arr, arr + 5, 101);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
