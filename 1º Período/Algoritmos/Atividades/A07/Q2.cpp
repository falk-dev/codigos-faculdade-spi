/*
 *  2) Faça um algoritmo que leia uma quantidade de valores escolhida pelo usuário.
 *  Para cada valor, o algoritmo deve apresentar a quantidade de divisores dele e o somatório de 1 até ele.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int qtd_valores, num;

    cout << "Este programa e informa os divisores e a soma de quantos números você quiser!" << endl;
    cout << endl;

    cout << "Digite quantos valores você deseja informar: ";
    cin >> qtd_valores;
    cout << endl;

    for (int i = 1; i <= qtd_valores; i++) {
        int soma = 0, qtd_divisores = 0;

        cout << "Digite o " << i << "º número: ";
        cin >> num;

        for (int j = 1; j <= num; j++) {
            soma += j;

            if (num % j == 0) {
                qtd_divisores++;
            }

            cout << j << " ";

            if (j == num) {
                cout << "= " << soma << endl;
                cout << "O " << num << " possui " << qtd_divisores << " divisores." << endl;
                cout << endl;
            } else {
                cout << "+ ";
            }
        }
    }

    return 0;
}