/*
 *  3) Desenvolva um algoritmo que converta, com base na cotação de hoje, o valor da moeda brasileira nos valores correspondentes
 *  da moeda norte-americana, britânica, chinesa e da União Europeia.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    double reais = 0, usd = 0, gbp = 0, cny = 0, eur = 0;

    cout << "Este programa faz conversoes!" << endl;

    cout << "Digite o valor (R$): ";
    cin >> reais;

    usd = reais * 4.97;
    gbp = reais * 6.18;
    cny = reais / 1.42;
    eur = reais * 5.37;

    cout << fixed << setprecision(2);

    cout << "O valor equivalente na moeda norte-americana (USD) eh $" << usd << endl;
    cout << "O valor equivalente na moeda britanica (GBP) eh £" << gbp << endl;
    cout << "O valor equivalente na moeda chinesa (CNY) eh ¥" << cny << endl;
    cout << "O valor equivalente na moeda da uniao europeia (EUR) eh €" << eur << endl;

    return 0;
}