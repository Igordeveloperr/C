﻿#include <iostream>
using namespace std;

int main()
{
    /*
        Escape последовательности:
        \b - удаление последнего введеного символа
        \n - переход на начало новой строки
        \t - табуляция
        \\ - вывод обратной черты \
        \" - вывод двойной ковычки
        \' - вывод одинарной ковычки
    */
    setlocale(LC_ALL, "Russian");
    cout << "Всем тупа хай шо \n мне очень хочется пиццы,\t а вообще я лютый погус \"амогус\"";
}
