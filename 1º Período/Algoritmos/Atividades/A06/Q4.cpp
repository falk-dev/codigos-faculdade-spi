/*
    4) Desenvolva um algoritmo que determine a quantidade de raízes de uma equação do segundo grau. O algoritmo também deve apresentar o valor de Delta.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0, delta = 0;

    cout << "Este programa determina quantas raizes uma equacao tem!" << endl;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "Digite o valor de c: ";
    cin >> c;

    delta = (b * b) - 4 * a * c;

    if (delta > 0) {
        cout << "O delta desta equacao eh " << delta << ". Logo, possui 2 raizes!" << endl;
    } else if (delta == 0) {
        cout << "O delta desta equacao eh " << delta << ". Logo, possui 1 raiz!" << endl;
    } else {
        cout << "O delta desta equacao eh " << delta << ". Logo, nao possui raizes!" << endl;
    }

    return 0;
}