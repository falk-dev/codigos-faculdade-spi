/*
 *  5) Faça um algoritmo que verifique se um número fornecido pelo usuário é 0, par ou ímpar. Para isso, apresente uma mensagem
 *  contendo o número digitado e o resultado do teste. (Obs: se o número for 0, não precisa informar se ele é par ou ímpar, apenas que ele é 0).
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;

    cout << "Esse programa informa o tipo de um numero!" << endl;

    cout << "Digite um numero: ";
    cin >> num;

    if (num % 2 == 0 && num > 0) {
        cout << "O numero " << num << " eh par!" << endl;
    } else if (num == 0) {
        cout << "O numero que voce digitou eh 0!" << endl;
    } else {
        cout << "O numero " << num << " eh impar!" << endl;
    }

    return 0;
}