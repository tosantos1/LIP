#include <iostream>

/*Ordenação por referência
﻿
Complete o programa dado para que com apenas uma chamada
para o procedimento ordenarTres, os valores das variáveis a, b e c sejam colocados em ordem crescente.
Note que nenhuma alteração da função main nem do procedimento ordenarTres é necessária.*/

using namespace std;
int oQueEuFaco (int x, int y );

void oQueEuFaco(int &x, int &y);

void ordenarTres(int &x, int &y, int &z);

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

  ordenarTres(a, b, c);

  cout << a << " " << b << " " << c << endl;

  return 0;
}

//Este procedimento arranja os valores de x, y e z em ordem crescente
void ordenarTres(int &x, int &y, int &z)
{
  oQueEuFaco(x, y);
  oQueEuFaco(x, z);
  oQueEuFaco(y, z);
}
int oQueEuFaco (int x, int y){
  int a;
    if ( x>y){
    a=x;
    x=y;
    y=a;
}
}
