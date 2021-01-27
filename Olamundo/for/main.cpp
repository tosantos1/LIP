#include <iostream>

using namespace std;

int main()
{
    int x, n, resultado = 1;

    cout << "Informe a base: ";

    cin >> x;

    cout << "Informe o expoente: ";

    cin >> n;

    for(int cont = 0;cont < n ; cont ++){

        resultado = resultado * x;
    }

    cout << "Resultado: " << resultado << endl;


    return 0;
}
