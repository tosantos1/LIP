#include <iostream>

using namespace std;

int main()
{
    bool ensinoMedio, habilitacaoB, ensinoSuperior;

    int experiencia, idade;

    bool apto;

    cout << "O candidato possui ensino medio (sim=1, nao=0) ? ";

    cin >> ensinoMedio;

    cout << " candidato possui habilitacao tipo b (sim=1, nao=0) ? ";

    cin >> habilitacaoB;

    cout << " Quantos anos de experiencia o candidato possui ? ";

    cin >> experiencia;

    // 0 || 1
    apto = (ensinoMedio && experiencia >= 3 && habilitacaoB || (ensinoSuperior && habilitacaoB));

    cout << "Candidato apto (sim=1, nao=0)?" << apto << endl;


    return 0;
}
