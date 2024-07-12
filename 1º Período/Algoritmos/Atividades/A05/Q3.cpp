/*
    3) Faça um algoritmo que tenha como dado de entrada o dia da semana e retorne ao usuário a cor da camisa que ele deve vestir de acordo com a tabela abaixo:
    segunda: branca
    terça: verde
    quarta: azul
    quinta: amarela
    sexta: vermelha
    sábado: cinza
    domingo: rosa
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    string dia_da_semana;

    cout << "Ola! Esse programa diz qual cor de camisa voce deve usar, de acordo com o dia da semana!" << endl;

    cout << "Digite o dia da semana (sem acentos): ";
    cin >> dia_da_semana;

    cout << "Hoje voce deve usar ";

    if (dia_da_semana == "segunda") {
        cout << "branco!" << endl;
    } else if (dia_da_semana == "terca") {
        cout << "verde!" << endl;
    } else if (dia_da_semana == "quarta") {
        cout << "azul!" << endl;
    } else if (dia_da_semana == "quinta") {
        cout << "amarelo!" << endl;
    } else if (dia_da_semana == "sexta") {
        cout << "vermelho!" << endl;
    } else if (dia_da_semana == "sabado") {
        cout << "cinza!" << endl;
    } else if (dia_da_semana == "domingo") {
        cout << "rosa!" << endl;
    }

    return 0;
}