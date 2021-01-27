#include <iostream>

using namespace std;

/*do {
    intruções;
}while(condição verdadeira);*/

int main()
{
    int valor1, valor2;

    do {
        cout << "Informe dois valores: ";

        cin >> valor1 >> valor2;
    }
    while(valor1==valor2);

        cout << "Valores lidos: " << valor1 << " " << valor2 << endl;



    return 0;
}
