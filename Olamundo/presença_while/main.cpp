#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float massai, massaf;
    int hora, minuto, segundos;
    int cont = 0;

    cin >> massai;

    massaf=massai;
    while(massaf >= 0.5){
     massaf = massaf/2;
     cont = cont +50;
    }
    hora = cont/3600;
    minuto = (cont%3600)/60;
    segundos = (cont%3600) %60;
    cout << fixed << setprecision(2);
    cout <<"Massa Inicial: " << massai << endl << "Massa final: " <<massaf << endl << "Tempo Total: " << hora << ":" << minuto << ":" << segundos << endl;




    return 0;
}
