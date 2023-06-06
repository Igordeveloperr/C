#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 0;
    int b = 0;

    cout << "Введите a: ";
    cin >> a;

    cout << "Введите b: ";
    cin >> b;

    cout << "Сумма: " << a + b;
}
