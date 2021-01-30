#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float x;

    float resultado = 0.0;
    float termo = 1.0;
    float sinal = 1.0;
    float fatorial;
    int n=0;

    cout << "Informe o angulo: ";

    cin >> x;


    while(termo > 1e-5){
        resultado = resultado + (sinal*termo);
        n++;
        sinal = sinal * -1.0;
        fatorial = 1.0;

        for(int i=2; i<=2*n; i++){
            fatorial = fatorial * i;
        }

        //fatorial
        termo = pow(x,2*n)/fatorial;
    }

    cout << "Cos " << x << " = " << resultado << endl;
    return 0;
}
