#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 5;
    cout << a << endl;
    a = -a; // унарный минус
    cout << a << endl;

    int b = 10, c = 17, res;
    res = b + c;
    cout << res << endl;

    res = b - c;
    cout << res << endl;

    res = b * c;
    cout << res << endl;

    double div = double(b) / double(c);
    cout << div << endl;

    res = b % c;
    cout << res << endl;
}
