/*
 *  1) Escreva um algoritmo que leia uma quantidade indefinida de valores e, no final, apresente o maior e o menor valor.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, maior = INT_MIN, menor = INT_MAX, i = 1;

    cout << "Este programa informa o maior e o menor número de uma sequência de números!" << endl;
    cout << endl;
    cout << "------ ATENÇÃO!! ------" << endl;
    cout << "Para sair do programa, digite 0 ou algum valor negativo." << endl;
    cout << endl;

    do {
        cout << "Digite o " << i << "º número: ";
        cin >> num;

        if (num <= 0) {
            cout << "Você encerrou a inserção de números!" << endl;
            break;
        }

        if (num > maior) {
            maior = num;
        } else if (num < menor) {
            menor = num;
        }

        i++;
    } while (num > 0);

    cout << endl;
    cout << "O maior número da sequência é " << maior << " e o menor é " << menor << endl;

    return 0;
}