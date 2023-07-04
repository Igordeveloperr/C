#include <iostream>
using namespace std;

int main()
{
    int *point = new int; // выделение динамичсекой памяти размером sizeof(int)
    *point = 45; // инициализация
    cout << *point << endl;
    delete point; // освобождение памяти
    point = nullptr; // обнуление указателя, чтобы он не указывал на освобожденную область памяти

    // динамический массив
    const int LEN = 4;
    int *arrPointer = new int[LEN];
    
    for (int i = 0; i < LEN; i++)
    {
        arrPointer[i] = i * 2;
        cout << arrPointer[i] << " -> " << endl;
    }

    delete[] arrPointer;
    arrPointer = nullptr;

}

