#include <iostream>

using namespace std;

/*Notas: Implemente um programa que lê três notas de um aluno em uma disciplina
 e imprime a situação do aluno conforme as regras da UFRN, ou seja:
 - Aprovado: média das notas é maior ou igual a 5 e o aluno não tirou nenhuma nota abaixo de 3
 - Final: caso o aluno não tenha sido aprovado e ele possua média maior ou igual a 3
 - Reprovado: caso a média do aluno seja menor do que 3*/

int main()
{
    float nota1, nota2, nota3, media;


    cin >> nota1;
    cin >> nota2;
    cin >> nota3;

    media = (nota1 + nota2 + nota3)/3;

    if(nota1 >= 3 && nota2 >= 3 && nota3 >= 3 && media >= 5 ){
        if(media>=5){
                   cout << "Aprovado" << endl;
        }

    }else if (nota1 == 0 || nota2 == 0 || nota3 == 0){
        cout <<"Reprovado" << endl;
    }

    else if (media < 5 || nota1 >= 3 || nota2 >= 3 || nota3 >= 3 ) {
        cout <<"Final" << endl;

    }else if (media < 3 && nota1 == 0 || nota2 == 0 || nota3 == 0){
        cout <<"Reprovado" << endl;
    }

    return 0;

}
