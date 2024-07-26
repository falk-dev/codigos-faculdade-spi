/*
 *  4) Apresente um algoritmo que leia uma quantidade de pares de valores de valores inteiros escolhida pelo usuário,
 *  armazenando o menor valor em uma variável x e o maior em y, e para cada par de valores calcular a soma dos inteiros de x até y os incluindo.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Este programa informa a soma de x até y de quantos números você quiser!" << endl;
    cout << endl;
    cout << "Digite quantos números você deseja informar: ";
    cin >> num;
    cout << endl;

    for (int i = 0; i < num; i++) {
        int x, y, soma = 0;

        cout << "Digite o número de x: ";
        cin >> x;

        cout << "Digite o número de y: ";
        cin >> y;

        cout << "SOMA: ";

        for (int j = x; j <= y; j++) {
            cout << j;
            soma += j;

            if (j == y) {
                cout << " = " << soma << endl;
            } else {
                cout << " + ";
            }
        }
        cout << endl;
    }

    return 0;
}