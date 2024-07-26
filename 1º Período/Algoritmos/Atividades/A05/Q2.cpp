/*
 *  2) Faça um algoritmo que leia dois valores, a e b, e execute as seguintes operações:
 *  (a) se a é igual b, apresente o quadrado de a.
 *  (b) se a for maior que b, apresente a + b.
 *  (c) se a for menor que b, apresente b - a.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0, b = 0, op = 0;

    cout << "Esse programa faz operacoes matematicas!" << endl;

    cout << "Digite o 1º numero: ";
    cin >> a;

    cout << "Digite o 2º numero: ";
    cin >> b;

    if (a == b) {
        op = a * b;
    } else if (a > b) {
        op = a + b;
    } else {
        op = b - a;
    }

    cout << "O resultado da operacao eh: " << op << endl;

    return 0;
}