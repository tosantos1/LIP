#include <iostream>

using namespace std;

/*Escreva um programa lê um número inteiro e imprime
a mensagem Menor que 10 caso esse número seja menor do que dez,
e imprime o quadrado desse número caso contrário.​*/

int main()
{
    int a,dobro;
    cin >> a;

    if (a < 10) {
    cout << "Menor que 10" << endl;
    }else {
    dobro = a*a;
    cout << dobro << endl;
    }

    return 0;
}
