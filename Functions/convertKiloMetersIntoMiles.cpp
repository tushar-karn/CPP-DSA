#include <iostream>
using namespace std;

float convertToMiles(float km)
{
    float miles = km * 0.62137;
    return miles;
}

int main()
{
    float km;
    cout << "Enter km to convert in miles " << endl;
    cin >> km;
    float ans = convertToMiles(km);
    cout << km << " Km in miles is " << ans << " !!" << endl;
    ;
}