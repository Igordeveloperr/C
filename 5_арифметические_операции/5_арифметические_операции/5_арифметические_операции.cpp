#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 5;
    cout << a << endl;
    a = -a; // унарный минус
    cout << a << endl;

    // ну тут классика
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

    // инкремент и дикремент
    int i = 9;
    i--;
    i -= 2;
    i++;
    i += 10;
    cout << i << endl;
}
