#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	bool a = false, b = true;

	cout << (45 > 90) << endl;
	cout << (!a || b) << endl;
	cout << (a == b) << endl;
	cout << (a != b) << endl;
	cout << (a && b) << endl;
	cout << !b << endl;
}
