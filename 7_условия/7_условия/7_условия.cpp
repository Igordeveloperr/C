#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
    
	int a , b;

	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;

	if ((a > b) && (a <= 100)) 
	{
		cout << "Я ОПРЕДЕЛЕННО ХОЧУ ПИЦЦЫ!!!!";
	}
	else if ((a < b) || (b > 0)) 
	{
		cout << "Я ВЫПОЛЗ";
	}
	else 
	{
		cout << "ВСЕ УДАЛЯЙ";
	}
}
