/*
 *  7) Desenvolva um algoritmo que determine o IMC (Índice de Massa Corporal) de uma pessoa e classifique-a
 *  de acordo com a Tabela 01 (utilize a estrutura SE-SENÃO).
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    double altura, peso, imc;

    cout << "Este programa classifica o seu IMC!" << endl;

    cout << "Digite sua altura (m): ";
    cin >> altura;

    cout << "Digite seu peso (kg): ";
    cin >> peso;

    imc = peso / (altura * altura);

    if (imc < 16) {
        cout << "Voce esta em magreza leve!" << endl;
    } else if (imc >= 16 && imc < 17) {
        cout << "Voce esta em magreza moderada!" << endl;
    } else if (imc >= 17 && imc < 18.5) {
        cout << "Voce esta em magreza leve!" << endl;
    } else if (imc >= 18.5 && imc < 25) {
        cout << "Voce esta saudavel!" << endl;
    } else if (imc >= 25 && imc < 30) {
        cout << "Voce esta em sobrepeso!" << endl;
    } else if (imc >= 30 && imc < 35) {
        cout << "Voce esta em obesidade grau I!" << endl;
    } else if (imc >= 35 && imc < 40) {
        cout << "Voce esta em obesidade grau II (severa)!" << endl;
    } else if (imc >= 40) {
        cout << "Voce esta em obesidade grau III (morbida)!" << endl;
    } else {
        cout << "Voce digitou algum dado invalido :/" << endl;
    }

    return 0;
}