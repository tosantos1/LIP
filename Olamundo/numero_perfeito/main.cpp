#include <iostream>

/*N�mero Perfeito Um n�mero perfeito � um n�mero natural para o qual a soma de todos os seus divisores (excluindo ele mesmo)
� igual ao pr�prio n�mero. Por exemplo, 6 � um n�mero perfeito pois 6 = 1 + 2 + 3.
Escreva uma programa que, dado um n�mero inteiro n>=2, imprima na tela todos os n�meros perfeitos menores que n.*/

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
