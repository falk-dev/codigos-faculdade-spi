/*
    7) Uma loja de departamento está oferecendo diferentes formas de pagamento, conforme as opções listadas a seguir.
    Faça um algoritmo que leia o valor total de uma compra e calcule o valor do pagamento final de acordo com a opção escolhida.
    Se a escolha for por pagamento parcelado, calcule também o valor da parcela. Ao final, apresente o valor total e valor das parcelas.

    (a) pagamento a vista: conceder desconto de 5%.
    (b) pagamento em 2 ou 3 parcelas: o valor não sofre alteração.
    (c) pagamento em 4 ou 5 parcelas: acréscimo de 2%.
    (d) pagamento entre 6 e 10 parcelas: acréscimo de 8%.
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int op;
    bool aux = true;
    double valor_total = 0, valor_pgto = 0;

    cout << "Este programa calcula o valor do pagamento final da sua compra!" << endl;

    cout << "Digite quanto deu sua compra: ";
    cin >> valor_total;

    cout << endl;

    cout << "--------- FORMAS DE PAGAMENTO ---------" << endl;
    cout << "1 - Pagamento a vista" << endl;
    cout << "2 - Pagamento em 2 ou 3 parcelas" << endl;
    cout << "3 - Pagamento em 4 ou 5 parcelas" << endl;
    cout << "4 - Pagamento entre 6 e 10 parcelas" << endl;
    cout << endl;

    cout << "Digite o NUMERO da opcao da sua forma de pagamento: ";
    cin >> op;

    switch (op) {
        case 1:
            valor_pgto = valor_total - (valor_total * 0.05);
            break;

        case 2:
            valor_pgto = valor_total;
            break;

        case 3:
            valor_pgto = valor_total + (valor_total * 0.02);
            break;

        case 4:
            valor_pgto = valor_total + (valor_total * 0.08);
            break;

        default:
            cout << "Opcao invalida!" << endl;
            aux = false;
            break;
    }

    // Delimitando 2 casas decimais
    cout << setprecision(2) << fixed;

    if (aux == true) {
        cout << "O valor final da sua compra eh R$ " << valor_pgto << endl;
    }

    return 0;
}