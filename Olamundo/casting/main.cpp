#include <iostream>

using namespace std;

int main()
{
    float valor;

    cout << "Informe  um valor real: ";

    cin >> valor;

    cout << "Valor informado: " << valor << endl;

    valor = (int)(valor + 0.5);
            //casting
    cout << "Valor arredondado: " << valor << endl;

    return 0;
}
