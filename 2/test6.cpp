// light years change

#include <iostream>

double lightyears2ast(double);

using namespace std;

int main()
{
    double lightyears;
    cout << "Enter the number of light years: ";
    cin >> lightyears;
    cout << lightyears << " light years = " << lightyears2ast(lightyears) << " astronomical units." << endl;

    return 0;
}

double lightyears2ast(double lightyears)
{
    return lightyears * 63240;
}
