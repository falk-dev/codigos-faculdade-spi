/*
 *  6) Escreva um algoritmo que leia uma quantidade indeterminada de valores. Se o valor for par, apresente o seu quadrado.
 *  Se o valor for ímpar, apresente a raiz quadrada. A entrada deve ser encerrada quando for digitado um valor zero ou negativo.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i = 1;

    cout << "Este programa informa o quadrado (par) ou a raiz de um número (ímpar)!" << endl;
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

        if (num % 2 == 0) {
            cout << "PAR (QUADRADO): " << pow(num, 2) << endl;
        } else {
            cout << "ÍMPAR (RAIZ): " << sqrt(num) << endl;
        }
        cout << endl;
        i++;
    } while (num > 0);

    return 0;
}