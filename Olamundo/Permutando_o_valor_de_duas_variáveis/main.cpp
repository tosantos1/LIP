#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 5;
    int auxiliar;

    cout << "Valores de a e b (respectivamente): ";

    cout << a << " " << b;

    auxiliar = a;

    a = b;

    b = auxiliar;

    cout << endl << "Valores de a e b (respectivamente): ";

    cout << a << " " << b;

    return 0;
}
