#include <iostream>

using namespace std;

//if(expressao1) {
//    bloco;
//}

//if(expressao1) {
//    bloco1;
//} else {
//    bloco2;
//}


int main()
{
    int numero, quadrado;

    cout << "Informe o numero: ";

    cin >> numero;

    if(numero < 10)
    {
        cout << "Numero informado menor do que 10. " << endl;1
    }
    else
    {
        quadrado = numero * numero;

        cout << "Quadrado do numero informado: " << quadrado;
    }

    return 0;
}
