#include <iostream>

using namespace std;

int main()
{
    int m, n;

    cout << "Informe m e n: ";

    cin >> m >> n;

    int iterador = (m%2!=0)? m: m+1;

    while(iterador <= n){
        cout << iterador << endl;
        iterador +=2;
        // iterador = iterador + 2;
    }

    /*for(int i = (m%2!=0?m:m+1); i <= n; i+=2){
        cout << i << endl;
    }*/

    return 0;
}
