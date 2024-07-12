/*
    8) Faça um algorítimo que resolva uma equação do 2º grau, recebendo os valores de a, b e c.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0, delta = 0;
    double bhaskara1 = 0, bhaskara2 = 0;

    cout << "Este programa resolve uma equacao de 2º grau!" << endl;

    cout << "Digite o valor de a: ";
    cin >> a;

    cout << "Digite o valor de b: ";
    cin >> b;

    cout << "Digite o valor de c: ";
    cin >> c;

    delta = (b * b) - 4 * a * c;

    bhaskara1 = (-b + sqrt(delta)) / (2 * a);
    bhaskara2 = (-b - sqrt(delta)) / (2 * a);

    // Delimitando as casas decimais
    cout << fixed << setprecision(1);
    cout << "Os valores da equacao sao: " << bhaskara1 << " e " << bhaskara2 << endl;

    return 0;
}