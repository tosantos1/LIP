#include <iostream>

using namespace std;

int main()
{
    int valor1, valor2;

    do{
        cout << "Informe dois valores inteiros: ";
        cin >> valor1 >> valor2;
    }
    while(valor1==valor2);


        cout <<"Valores informados: " << valor1 << " " << valor2 << endl;


    return 0;
}
