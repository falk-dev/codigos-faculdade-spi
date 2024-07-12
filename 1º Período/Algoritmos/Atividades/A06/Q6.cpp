/*
    6) Desenvolva um algoritmo que determine se um país é sulamericano ou não. Você pode utilizar códigos para representar cada país.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string pais;
    bool aux = false;
    vector<string> paises { "Argentina", "Bolivia", "Brasil", "Chile", "Colombia", "Equador", "Guiana Francesa", "Paraguai", "Peru", "Suriname", "Uruguai", "Venezuela" };

    cout << "Este programa informa se um pais eh sulamericano ou nao!" << endl;

    cout << "Digte o nome do pais (sem acento): ";
    getline(cin, pais);

    for (int i = 0; i < paises.size(); i++) {
        if (paises[i] == pais) {
            aux = true;
            break;
        }
    }

    if (aux == true) {
        cout << pais << " eh um pais sulamericano!" << endl;
    } else {
        cout << pais << " nao eh um pais sulamericano." << endl;
    }

    return 0;
}