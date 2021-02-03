#include <iostream>

using namespace std;

int main()
{
    int n, trono, novoValor;

    cout << "Informe quantos valores: ";

    cin >> n;

    cin >> novoValor;

    trono = novoValor;

    for(int i=1; i<n; i++){
        cin >> novoValor;

        if(novoValor < trono){
            trono = novoValor;
        }
    }

    cout << "Menor = " << trono << endl;
    return 0;
}
