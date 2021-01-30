#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    char calcular;
    char genero;
    float peso;
    float altura;
    float imc;
    do{
        cout <<"Calculo do IMC: " << endl;

        cout <<"Informe a altura: ";

        cin >> altura;

        cout <<"Informe o peso: ";

        cin >> peso;

        cout <<"Informe o genero (m ou f): ";

        cin>> genero;

        imc = peso/pow(altura, 2.0);

        cout << "IMC = " << imc << endl;

        switch(genero){
        case 'm':
            {
                if(imc <= 20.7)
                {
                    cout <<"Abaixo do peso. "<< endl;
                }else if(imc > 20.7 && imc <= 26.4)
                {
                    cout <<"Peso normal." << endl;
                }else if(imc > 26.4 && imc <= 27.8)
                {
                    cout << "Marginalmente acima do peso." << endl;
                }else if(imc > 27.8 && imc <= 31.1)
                {
                    cout << "Acimad o peso." << endl;
                }else{
                    cout <<"Obesidade." << endl;
                }
               break;
            }
        case 'f':
            {
                if(imc <= 19.1)
                {
                    cout <<"Abaixo do peso. "<< endl;
                }else if(imc > 19.1 && imc <= 25.8)
                {
                    cout <<"Peso normal." << endl;
                }else if(imc > 25.8 && imc <= 27.3)
                {
                    cout << "Marginalmente acima do peso." << endl;
                }else if(imc > 27.3 && imc <= 32.3)
                {
                    cout << "Acimad o peso." << endl;
                }else{
                    cout <<"Obesidade." << endl;
                }

                break;
            }
        default:
            {
                cout << "Genero invalido. Impossivel interpretar IMC";
            }
        }

        cout <<"Calcular IMC novamente (s ou n): ";
        cin >> calcular;
    }
    while(calcular == 's');
    return 0;
}
