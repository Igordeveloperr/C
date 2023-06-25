#include <iostream>
#include <cmath>;
using namespace std;

int main()
{
    // while 
    int a = 0;
    int data;

    while (a < 5) 
    {
        data = 2 * ++a;
        cout << "data -> " << data << endl;
    }

    cout << "-----------------" << endl;

    // do while
    int b = 10;
    
    do 
    {
        cout << "b = " << b << endl;
    } while (b < 10);

    cout << "-----------------" << endl;

    // for 
    int data2;

    for (int i = 0;  i < 3;  i++)
    {
        cout << "i = " << pow(i, 2) << endl;
    }

    cout << "-----------------" << endl;

    // особенности for
    int g = 0;
    for (; g < 4; g++) 
    {
        cout << "g = " << g << endl;
    }

    g = 0;
    for (; g < 4; )
    {
        cout << "g = " << g << endl;
        g++;
    }

    for (int i = 0, j = 10; i < 3; i++) 
    {
        cout << i * j << endl;
    }
}