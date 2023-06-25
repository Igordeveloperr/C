#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a) 
    {
        case 20:
            cout << "a = 20";
            break;
        case 40:
            cout << "a = 40";
            break;
        default:
            a = -1;
            cout << "not valid data";
            break;
    }
}
