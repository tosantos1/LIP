#include <iostream>
#include <cmath>
using namespace std;

// protótipo / assinatura

float calcularPG(float a1, float q, int n);

int main()
{
    cout << calcularPG(2.0, 1.5, 20) << endl;

    int termo;

    float termoInicial, razao, pg;

    cout << "Informe o termo, o termo incial e a razao da pg: ";

    cin >> termo >> termoInicial >> razao;

    pg = calcularPG(termoInicial, razao, termo);

    cout << "Resultado da pg: " << pg << endl;

    return 0;
}

//implementação

float calcularPG(float a1, float q, int n){

   float resultado = a1 * pow(q, n-1);

   return resultado;

}
