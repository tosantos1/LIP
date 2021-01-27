#include <iostream>
#include <math.h>
using namespace std;

/*Escreva um programa que lê três valores inteiros, que correspodem, respectivamente,
aos coeficientes a, b e c, de uma equação do segundo grau a*x^2 + b*x + ca∗x
2
 +b∗x+c. O seu programa deve calcular e mostrar as raízes dessa equação, de acordo com os seguintes critérios:

Imprima a mensagem Sem raiz real, caso não existam raízes reais.
Se a equação possui uma única raiz, imprima ela somente uma vez.
Se a equação possui duas raízes, imprima primero a raiz de menor valor.*/


int main()
{
    int a, b, c, delta;
    float x1, x2;

    cin >> a;
    cin >> b;
    cin >> c;

    delta = (b*b)-(4*a*c);

    if (delta < 0){
        cout << "Sem raiz real" << endl;
    }else{

        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);

        if(x1 == x2){

            cout << "" << x1 << endl;
        }else {
            if(x1 > x2){

            cout << "" << x2 << " " << x1 << endl;

            }else{

            cout << "" << x1 << " " << x2 << endl;

            }

        }

    }


    return 0;
}
