/*
 *  5) Um plano telefônico pré-pago oferta uso de 6000 minutos de ligação por um preço de R$ 70,00.
 *  Para cada minuto excedente o cliente deverá pagar um total de R$ 0,13. Desenvolva um algoritmo que determine o
 *  valor final da fatura do cliente.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int minutos = 0;
    double fatura = 0;

    cout << "Este programa informa o valor total da sua fatura!" << endl;

    cout << "Informe quantos minutos voce utilizou: ";
    cin >> minutos;

    if (minutos > 6000) {
        fatura = 70 + ((minutos - 6000) * 0.13);
    } else {
        fatura = 70;
    }

    cout << fixed << setprecision(2);
    cout << "O valor total da sua fatura eh de R$" << fatura << endl;

    return 0;
}