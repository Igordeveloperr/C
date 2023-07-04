#include <iostream>
#include "func.h"
using namespace std;
using namespace phonk;

int main()
{
    setlocale(LC_ALL, "ru");

    int a = pow(5, 3);
    cout << a << endl;

    int c = sum(10, 5);
    cout << c << endl;

    cout << baza << endl;
}
