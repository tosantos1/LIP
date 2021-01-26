#include <iostream>

using namespace std;

/*Media Escreva um programa que lê três números inteiros e
imprime a média aritmética deles.*/

int main()
{
    float a, b, c, media;

    cin >> a;
    cin >> b;
    cin >> c;

    media = (a + b + c)/3;

    cout << "" << media << endl;

    return 0;
}
