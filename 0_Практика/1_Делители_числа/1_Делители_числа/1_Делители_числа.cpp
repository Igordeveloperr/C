#include <iostream>
using namespace std;

int main()
{
    long long num = 2792599493716575;
    int count = 0;

    for (long long i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << endl;
            count++;
        }
    }

    cout << count;
}
