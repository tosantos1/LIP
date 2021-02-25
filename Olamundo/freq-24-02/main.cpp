#include <iostream>

using namespace std;

int main()
{
    int n, soma1=0, soma2=0, soma;
    cin>> n;
    int x[n];
    for(int i=0; i<n; i++){
    cin >> x[i];
    }
    if (n%2==0){
    for(int i=0; i<(n/2); i++){
    soma1 = soma1 +x[i] ;
    }
    soma1=soma1/(n/2);
    for(int i=(n/2); i <=n;i++){
    soma2= soma2 + x[i];
    }
    soma2= soma2/(n/2);
    }
    }
