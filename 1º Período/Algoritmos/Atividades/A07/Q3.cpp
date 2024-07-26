/*
 *  3) Construa um algoritmo que que leia uma quantidade indeterminada de valores e, no final,
 *  apresente: a soma dos valores pares e a média dos valores ímpares. O programa deve encerrar quando for digitado zero.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i = 0, pares = 0, impares = 0, qtd_impares = 0;

    cout << "Este programa informa a soma de valores pares e a média dos valores ímpares!" << endl;
    cout << endl;
    cout << "------ ATENÇÃO!! ------" << endl;
    cout << "Para sair do programa, digite 0 ou algum valor negativo." << endl;
    cout << endl;

    do {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> num;

        if (num <= 0) {
            cout << endl;
            cout << "Você encerrou a inserção de números!" << endl;
            cout << endl;
            break;
        }

        if (num % 2 == 0) {
            pares += num;

        } else {
            impares += num;
            qtd_impares++;
        }

        i++;
    } while (num > 0);

    double media = impares / qtd_impares;

    cout << "A soma dos números pares é " << pares << "." << endl;
    cout << "A média dos ímpares é " << media << "." << endl;

    return 0;
}