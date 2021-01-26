#include <iostream>

using namespace std;

int main()
{
    int x, y, z;
    int maior, menor, entre;
    cin >> x;
    cin >> y;
    cin >> z;

    if (x > y){
        maior = x;
    }else {
        maior = y;
    }if (z > maior){
        z = maior;
    }if (x < y){
        menor = x;
    }else {
        menor = y;
    }if (z < menor){
        menor = z;
    }if ( x == maior && y == menor || x == menor && y == maior){
        entre = z;
    }else if ( x == maior && z == menor || z == maior && x == menor){
        entre = y;
    }else {
        entre = x;
    }

    cout << "" << entre << endl;




   /* cout << "x  = " << x << " y = " << y << " z = " << z << endl;*/

    return 0;
}
