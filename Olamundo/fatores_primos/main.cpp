#include <iostream>


/*Sequencia de Números Implemente um programa que lê do usuário uma sequência de números
inteiros enquanto o valor 0 não é digitado.
Quando esse valor for digitado, o programa deve imprimir o menor valor dentre todos inseridos.*/

using namespace std;

int main()
{
    int i;
    int menor;

    cin >> i;

    menor = i;

    while(i!=0)
    {
        if(i < menor)
        {
            menor = i;
        }
        cin >> i;
    }
    cout << menor << endl;
    return 0;
}

