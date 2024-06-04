#include <iostream>
using namespace std;

float findArea(int radius)
{
    float area = 3.14159 * radius * radius;
    return area;
}

int main()
{
    float radius;
    cout << "Enter Radius Of Circle" << endl;
    cin >> radius;
    float ans = findArea(radius);
    cout << "Area Of Given Circle is " << ans << " !!" << endl;
}