#include <iostream>

using namespace std;

int main()
{
    float valorVenda;
    int codigo;
    float comissao;

    cout << "Informe o valor da venda: ";

    cin >> valorVenda;

    cout << "Informe codigo do vendedor: ";

    cin >> codigo;

    switch(codigo)
    {
        case 325:
        {
            comissao = valorVenda * (2.5/100);
            cout << "Comissao: " << comissao << endl;
            break;
        }
        case 266:
        {
            comissao = valorVenda * (1.5/100);
            cout << "Comissao: " << comissao << endl;
            break;
        }
        case 178:
        {
            comissao = valorVenda * (5.0/100);
            cout << "Comissao: " << comissao << endl;
            break;
        }
        default:
        {
            cout << "Codigo do vendedor errado!!" << endl;
            break;
        }
    }

    return 0;
}
