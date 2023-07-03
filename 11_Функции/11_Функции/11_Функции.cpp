#include <iostream>
using namespace std;

// прототипы функций
int sum(int, int);
// перегрузка функции sum
double sum(double, double);
void input(int&, char);
// перегрузка функции input
void input(double&, char);

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

void input(int& varible, char name)
{
    cout << name << " = ";
    cin >> varible;
}

void input(double& varible, char name)
{
    cout << name << " = ";
    cin >> varible;
}

int main()
{
    setlocale(LC_ALL, "ru");
    double a = 0, b = 0;

    while (true)
    {
        input(a, 'a');
        input(b, 'b');

        cout << "Сумма = " << sum(a, b) << "\n" << endl;
        
    }
}
