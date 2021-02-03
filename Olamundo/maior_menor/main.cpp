#include <iostream>

using namespace std;

int main()
{
    int a, b, c, trono;

    cout << "Informe tres valores: ";

    cin >> a >> b >> c;

    trono = a;

    if(b > trono){
        trono = b;
    }
    if (c > trono) {
        trono = c;
    }

    cout << "Maior = " << trono << endl;

    return 0;
}
