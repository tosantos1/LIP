#include <iostream>

using namespace std;



int main()
{
    int x, y, menor, maior, k=0;

    for (int i = 0; i<10; i++){
        cin >> x;
    }
    y = x[0];
    while(k < 10){

        i++;
        if(y<x[k]){
            menor = y;
        }else {
            y = x[k];
        }
        if(y>x[k]){
            maior = y;
        }else {
            y = x[k];
        }
    }
    cout << " " << maior << " " << menor << endl;



    return 0;
}
