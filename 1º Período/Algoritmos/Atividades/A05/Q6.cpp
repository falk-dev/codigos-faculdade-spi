/*
    6) Elabore um algoritmo que receba um valor do usuário e verifique se ele é múltiplo de 3 ou múltiplo de 7 ou ambos.
    Apresente uma mensagem informando o resultado do teste.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int num;

    cout << "Este programa verifica se um numero eh multiplo de 3 e/ou 7!" << endl;

    cout << "Digite um numero: ";
    cin >> num;

    if (num % 3 == 0 && num % 7 == 0) {
        cout << "O numero " << num << " eh multiplo de 3 e 7!" << endl;
    } else if (num % 3 == 0) {
        cout << "O numero " << num << " eh multiplo de 3!" << endl;
    } else if (num % 7 == 0) {
        cout << "O numero " << num << " eh multiplo de 7!" << endl;
    } else {
        cout << "O numero " << num << " nao eh multiplo nem 3 e nem de 7!" << endl;
    }
    return 0;
}