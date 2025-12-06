#include <iostream>
using namespace std;

// We have used the void pointer. A void pointer can store the memory address of any data type variable.
void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    }
}

int main()
{
    int n = 25;
    int *ptr = &n; // & - is called 'address of' operator
    cout << "Value: " << n << endl;
    cout << "Value: " << *ptr << endl; // * - is called 'dereference' operator
    cout << "Memory location: " << &n << endl;
    cout << "Memory location: " << ptr << endl;

    int num = 10;
    char letter = 'A';
    print(&num, 'i');
    print(&letter, 'c');
    return 0;
}
