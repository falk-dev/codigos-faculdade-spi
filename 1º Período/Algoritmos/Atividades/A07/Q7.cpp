/*
 *  7) Faça um algoritmo que calcule e exiba a tabuada de multiplicação, até um determinado número "n" fornecido pelo usuário.
 *  Lembrando que, se o número fornecido for 4, dever ser gerada a tabuada do 1, do 2, do 3 e do 4.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i = 1;

    cout << "Este programa informa a tabuada de 1 até n!" << endl;
    cout << endl;
    cout << "Digite o valor de n: ";
    cin >> num;
    cout << endl;

    for (int i = 1; i <= num; i++) {
        cout << "------ TABUADA DO " << i << " ------" << endl;
        for (int j = 1; j <= 10; j++) {
            cout << "\t" << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}