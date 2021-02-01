#include <iostream>

/*Número Perfeito Um número perfeito é um número natural para o qual a soma de todos os seus divisores (excluindo ele mesmo)
é igual ao próprio número. Por exemplo, 6 é um número perfeito pois 6 = 1 + 2 + 3.
Escreva uma programa que, dado um número inteiro n>=2, imprima na tela todos os números perfeitos menores que n.*/

using namespace std;

int main()
{
    int n, soma = 0;

    cin >> n;

    for(int cost=2; cost < n; cost++){
        for(int post=1; post < cost; post++){
            if(cost%post == 0){
                soma = soma + post;
            }
        }
        if(soma==cost){
            cout << cost << endl;
        }
        soma = 0;
    }

    return 0;
}
