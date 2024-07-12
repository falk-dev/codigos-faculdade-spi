/*
    1) Faça um programa que recebe o nome, 4 notas e faltas de um aluno.
    Para passar direto ele deve ter média maior ou igual a 7 e ter faltado a menos de 25% das aulas.
    Caso ele não tenha alcançado a média para passar, deve fazer prova final, onde deve tirar nota maior ou igual a 10-média.

    Se ele estiver reprovado por falta, não terá direito a fazer a final.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string nome;
    double media = 0, pontos = 0, percentual_faltas = 0, nota = 0, soma_notas = 0, nota_final = 0;
    int faltas = 0, ch = 0;

    cout << "Ola! Este programa informa se voce foi aprovado ou reprovado!" << endl;

    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "Agora, informe quantas faltas voce tem: ";
    cin >> faltas;

    cout << "Informe a carga horaria da disciplina: ";
    cin >> ch;

    percentual_faltas = (100.0 * faltas) / ch;

    if (percentual_faltas >= 25) {
        cout << nome << ", infelizmente voce reprovou por falta =(" << endl;
    } else {
        for (int i = 1; i <= 4; i++) {
            double nota;
            cout << "Informe a " << i << "ª nota: ";
            cin >> nota;

            soma_notas += nota;
        }

        media = soma_notas / 4.0;

        // Delimitando 1 casa decimal
        cout << setprecision(1) << fixed;
        cout << endl;

        if (media >= 7) {
            cout << "Meus parabens, " << nome << "! Voce foi aprovado com media " << media << " =)." << endl;
        } else {
            pontos = 10 - media;
            cout << nome << ", voce precisa de " << pontos << " pontos para passar na final!" << endl;
            cout << "Digite quanto voce tirou na prova final: ";
            cin >> nota_final;

            if (nota_final >= pontos) {
                cout << "Uhuuuu, " << nome << "! Voce passou! Boas ferias =D" << endl;
            } else {
                cout << "Infelizmente voce reprovou... Boa sorte na proxima, " << nome << " :(" << endl;
            }
        }
    }

    return 0;
}