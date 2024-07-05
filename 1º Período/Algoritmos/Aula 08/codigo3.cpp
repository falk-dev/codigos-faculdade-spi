/*
 *  Disciplina: Algoritmos
 *  Aula 08 - 05/07/2024
 *  Author: falk.dev
 *  [Assuntos]: Entrada | Saída | Estrutura de Condição
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int idade;
    string nome;
    
    cout << "Ola! Saiba em qual classificacao voce esta no time Pernas de Pau!" << endl;
    
    cout << "Digite seu nome: ";
    cin >> nome;
    
    cout << "Digite sua idade: ";
    cin >> idade;
    
    switch(idade) {
        case 0 ... 5:
            cout << "Voce esta na turma Babies!" << endl;
            break;
        case 6 ... 10:
            cout << "Voce esta na turma Babies!" << endl;
            break;
        case 11 ... 15:
            cout << "Voce esta na turma Babies!" << endl;
            break;
        default:
            cout << "Voce esta na turma Young!" << endl;
            break;
    }
}






