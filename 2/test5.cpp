// Celsius to Fahrenheit

#include <iostream>

int celsius2fahrenheit(double);

using namespace std;

int main()
{
    double temp;
    cout << "Please enter a celsius value: ";
    cin >> temp;
    cout << temp << " degrees celsius is " << celsius2fahrenheit(temp) << " degrees fahrenheit." << endl;

    return 0;
}

int celsius2fahrenheit(double temp)
{
    return temp * 1.8 + 32.0;
}
