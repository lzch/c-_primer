// func call 

#include <iostream>

using namespace std;

void call_test1();
void call_test2();

int main()
{
    call_test1();
    call_test1();
    call_test2();
    call_test2();

    return 0;
}

void call_test1()
{
    cout << "Three blind mice" << endl;
}

void call_test2()
{
    cout << "See how they run" << endl;
}
