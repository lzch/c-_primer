// show time

#include <iostream>

void show(int, int);

using namespace std;

int main()
{
    int hours, minutes;

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << "Enter the number of minutes: ";
    cin >> minutes;
    show(hours, minutes);

    return 0;
}

void show(int h, int m)
{
    cout << "Time: " << h << ":" << m << endl;
}
