#include <iostream>
using namespace std;

struct item
{
    int value;
    unique_ptr<int> next;
};

item create_list()
{
    item first;
    first.value = 404;
    first.next = nullptr;
    return first;
}

item add(item& last, int value)
{
    item elem;
    elem.value = value;
    elem.next = nullptr;
    last.next = make_unique<int>(elem.value);
    return elem;
}

int main()
{
    unique_ptr<int> pointer;
    pointer = make_unique<int>(1123); // кладем данные в область памяти, на которую ссылается указатель
    cout << "Pointer address: " << pointer.get() << endl; // получаем адрес памяти
    cout << "Value: " << *pointer << endl; // получаем данные из памяти

    *pointer = 3000; // изменяем данные в памяти
    cout << "New value: " << *pointer << endl;

    unique_ptr<int> ptr = make_unique<int>(11);
    cout << *pointer + *ptr << endl;

    // односвязный список
    item first = create_list();
    item last = add(first, 100);
    // ну короч там дальше по накатанной
}

