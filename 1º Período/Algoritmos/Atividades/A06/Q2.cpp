/*
    2) Desenvolva um algoritmo que determine a área e o perímetro de um retângulo qualquer.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a = 0, b = 0, c = 0, perimetro = 0;
    double area = 0, semiperimetro = 0;

    cout << "Este programa calcula a area e o perimetro de um retangulo!" << endl;

    cout << "Digite o valor do lado a (cm): ";
    cin >> a;

    cout << "Digite o valor do lado b (cm): ";
    cin >> b;

    cout << "Digite o valor do lado c (cm): ";
    cin >> c;

    perimetro = a + b + c;
    semiperimetro = perimetro / 2.0;

    area = sqrt(semiperimetro * (semiperimetro - a) * (semiperimetro - b) * (semiperimetro - c));

    cout << endl;
    cout << "O perimetro do triangulo eh: " << perimetro << "cm." << endl;
    cout << "A area do triangulo eh: " << area << "cm³." << endl;

    return 0;
}