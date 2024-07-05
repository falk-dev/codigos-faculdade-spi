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
    
    if (idade >=0 && idade <= 5) {
        cout << "Voce esta na turma Babies!" << endl;
    }
    else if (idade > 5 && idade <= 10) {
        cout << "Voce esta na turma Kids!" << endl;
    }
    else if (idade > 10 && idade <= 15) {
        cout << "Voce esta na turma Teens!" << endl;
    }
    else if (idade > 15) {
        cout << "Voce esta na turma Young!" << endl;
    }
}