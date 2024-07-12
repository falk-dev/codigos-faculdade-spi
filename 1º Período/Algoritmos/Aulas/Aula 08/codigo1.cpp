/*
 *  Disciplina: Algoritmos
 *  Aula 08 - 05/07/2024
 *  Author: falk.dev
 *  [Assuntos]: Entrada | Saída | Estrutura de repetição | Estrutura de Condição
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int notas, ch, faltas;
    double media, presenca, pontos;
    string nome;

    cout << "Ola! Esse programa diz se voce foi aprovado ou reprovado por media e presenca!" << endl;
    
    cout << "Digite seu nome: ";
    cin >> nome;

    cout << nome << ", digite suas notas: ";
    
    for (int i = 0; i < 4; i++) {
        int n;
        cin >> n;
        notas += n;
    }
    
    cout << "Digite a carga horaria da sua disciplina: ";
    cin >> ch;
    
    cout << "Digite quantas aulas voce faltou: ";
    cin >> faltas;
    
    
    presenca = (100.0 * faltas) / ch;
    media = notas / 4.0;

    if (media >= 7 && presenca < 25) {
        cout << "Meus parabens, " << nome << "! Voce foi aprovado!" << endl;
    }
    else if (media < 7 && presenca < 25) {
        pontos = 10 - media;
        cout << "Voce deve fazer a prova final e tirar " << pontos << " pontos para passar." << endl;
    }
    else {
        cout << "Voce reprovou! :(" << endl;
    }
}