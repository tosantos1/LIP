#include <iostream>

using namespace std;

int main()
{
    float a, b, c, delta, x1, x2;

    cout << "Informe os valores de a, b, e c: ";

    cin >> a >> b >> c;

    delta = b*b - 4*a*c;

    if (delta < 0)
    {
        cout << "Equacao nao possui raizes reais" << endl;
    }
    else
    {
        if(delta == 0){
            x1 = x2 = -b /(2*a);

            cout << "raiz: " << x1 << endl;
        }
        else{
            x1 = (- b + sqrt(delta))/(2*a);
            x2 = (- b - sqrt(delta))/(2*a);
            cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
        }
    }
    return 0;
}
