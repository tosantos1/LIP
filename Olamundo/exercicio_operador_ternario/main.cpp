#include <iostream>

using namespace std;

int main()
{
    int numero;
    char resposta;

    cout << "Informe um inteiro positivo: ";

    cin >> numero;

    resposta = numero%2==0 ? 'p' : 'i';

    cout << "Resposta: " << resposta << endl;
    return 0;
}
