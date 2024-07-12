/*
    1) Desenvolva um algoritmo que receba um valor em minutos e imprima o resultado em segundos e horas.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int minutos = 0, segundos = 0;
    double horas = 0;

    cout << "Este programa calcula o equivalente em horas e segundos de x minutos!" << endl;

    cout << "Digite os minutos: ";
    cin >> minutos;

    horas = minutos / 60.0;
    segundos = minutos * 60;

    cout << fixed << setprecision(1);

    cout << minutos << " minutos equivale a " << horas << " hora(s)!" << endl;
    cout << minutos << " minutos equivale a " << segundos << " segundo(s)!" << endl;

    return 0;
}