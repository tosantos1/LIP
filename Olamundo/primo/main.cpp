#include <iostream>

/*PrimoImplemente um programa que lê um
número inteiro positivo e informa se esse número é primo ou não*/

using namespace std;

int main()
{
    int numero;
    bool primo = true;

    cout << "";

    cin >> numero;

    if(numero == 1 || numero== 0){
        primo = false;
    }

    for(int divisor = 2; divisor < numero; divisor++){
        if(numero%divisor==0){
            primo = false;
        }
    }

    if(primo == true){
        cout << "O número " << numero << " é primo" << endl;
    }else {
        cout << "O número "<< numero << " não é primo";
    }

    return 0;
}
