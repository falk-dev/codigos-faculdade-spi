/*
 *  Disciplina: Algoritmos
 *  Aula 08 - 05/07/2024
 *  Author: falk.dev
 *  [Assuntos]: Entrada | Saída | Estrutura de Condição
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int idade, qtd_alunos, n_babies = 0, n_kids = 0, n_teens = 0, n_young = 0;
    string nome;
    
    cout << "Ola! Saiba em qual classificacao voce esta no time Pernas de Pau!" << endl;
    
    cout << "Digite quantos alunos voce ira cadastrar: ";
    cin >> qtd_alunos;

    for (int i = 0; i < qtd_alunos; i++) {
        cout << "Digite a idade do " << i + 1 << "o aluno(a): ";
        cin >> idade;
        
        if (idade >=0 && idade <= 5) {
            n_babies++;
        }
        else if (idade > 5 && idade <= 10) {
            n_kids++;
        }
        else if (idade > 10 && idade <= 15) {
            n_teens++;
        }
        else if (idade > 15) {
            n_young;
        }
    }

    
}






