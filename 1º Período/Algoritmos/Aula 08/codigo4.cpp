/*
 *  Disciplina: Algoritmos
 *  Aula 08 - 05/07/2024
 *  Author: falk.dev
 *  [Assuntos]: Entrada | Saída | Estrutura de repetição
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int idade = 200, calculo;
    string nome;
    
    cout << "Ola! Esse programa calcula quantos dias voce viveu!" << endl;
    
    while (idade < 0 || idade > 120) {
        cout << "Digite sua idade: ";
        cin >> idade;
    }
    
    calculo = 365 * idade;
    
    cout << "Voce viveu " << calculo << " dias!" << endl;
}