#include <iostream>

using namespace std;

int main()
{
    int numero;
    int contSete = 0;
    int contIter = 0;

    cout << "Informe um valor: ";

    cin >> numero;

    while(numero > 0){

        if(numero%10==7)
        {
            contSete++;
        }

        numero = numero/10; //Eliminar o ultimo digito
        contIter++;
    }
    if(contSete>=3){
        cout << "Numero informado possui 3 ou mais digitos 7" << endl;
    }else {
        cout << "Numero informado nao possui 3 ou mais digitos 7" << endl;
    }

    cout << "Iter: " << contIter << endl;



    return 0;
}
