#include <iostream>

using namespace std;

int main()
{
    int numero;
    bool primo = true;

    cout << "Informe um numero: ";

    cin >> numero;

    for(int divisor=2; divisor < numero; divisor ++)
    {
        if(numero%divisor==0){
            primo = false;
        }
    }

    if(primo==true){
        cout << numero << " e primo" << endl;
    }else {
        cout << numero << " nao e primo" << endl;
    }

    return 0;
}
