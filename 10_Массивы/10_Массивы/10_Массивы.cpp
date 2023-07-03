#include <iostream>
using namespace std;

int main()
{
	int arr[3]; // объявление массивчика

	// процесс инициализации массива
	arr[0] = 1488;
	arr[1] = -10;
	arr[2] = 9021;

	cout << arr[0] << endl;

	// объявление и инициализация одновременно
	double muy[] = {13.2, 14.88, 99};
	cout << size(muy) * sizeof(muy[0]) << endl; // ню да я жеский

	// ЧЗХ перебор циклоидом
	for (int i = 0; i < size(muy); i++) 
	{
		cout << muy[i] << " ";
	}
	cout << endl;

	// двумерный массив
	int z[4][4];
	
	// заполнение двумерного массива
	for (int i = 0; i < size(z); i++)
	{
		for (int j = 0; j < size(z); j++)
		{
			z[i][j] = rand();
		}
	}

}

