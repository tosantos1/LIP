#include <iostream>

/*[Digitos] Implemente um programa que lê um número inteiro
n (pode ser positivo ou negativo)
e imprime a quantidade de dígitos desse número.*/

using namespace std;

int main()
{
    int i;

    int quantidade = 0;

    cout << "";

    cin >> i;

    while(i>0){

        quantidade++;
        i = i/10;
    }

    cout << "" << quantidade << endl;

    return 0;
}
