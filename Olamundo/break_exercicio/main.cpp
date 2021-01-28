#include <iostream>

using namespace std;

int main()
{
    int n;
    float nota;
    float somaNotas = 0.0f;
    float media;

    cout << "Informe a quantidade de notas: ";

    cin>> n;

    for(int cont=0; cont < n; cont ++){
        cout << "Informe uma nota: ";

        cin >> nota;

        if(nota < 0 || nota > 10){
            cont--;
            cout << "Nota invalida" << endl;
            continue;
        }

        somaNotas= somaNotas + nota;
    }

    media = somaNotas/n;

    cout << "Media: " << media << endl;

    return 0;
}
