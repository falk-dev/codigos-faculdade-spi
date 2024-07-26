/*
 *  5) Produza um algoritmo que leia uma quantidade indeterminada de valores e para cada um deles apresente o seu fatorial.
 *  A entrada de dados deve ser encerrada quando for digitado um valor zero ou negativo.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i = 1;

    cout << "Este programa informa o fatorial de quantos números você quiser!" << endl;
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

        cout << "FATORIAL: ";

        int multi = 1;

        for (int j = num; j >= 1; j--) {
            cout << j;

            multi *= j;

            if (j == 1) {
                cout << " = " << multi << endl;
            } else {
                cout << " x ";
            }
        }
        cout << endl;
        i++;
    } while (num > 0);

    return 0;
}