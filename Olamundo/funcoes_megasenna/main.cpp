#include <iostream>
#include <iomanip>
using namespace std;

double calcularFatorial(int n);
double calcularBinomial(int n, int k);
double calcularProbabilidade();

int main()
{
    double p = calcularProbabilidade();
    cout << fixed << setprecision(10) << p << endl;
    return 0;
}

double calcularFatorial(int n){
    double resultado = 1.0;

    for(int i=2; i<=n; i++){
        resultado = resultado * i;
    }
    return resultado;
}
double calcularBinomial(int n, int k){
    return calcularFatorial(n)/ (calcularFatorial(n-k)*calcularFatorial(k));
}
double calcularProbabilidade(){
    return 1.0/calcularBinomial(60, 6);
}
