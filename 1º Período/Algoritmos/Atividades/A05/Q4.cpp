/*
 *  4) Uma empresa concederá um reajuste salarial de 14% no próximo mês se o salário for de até R$ 4000,
 *  se for acima desse valor o reajuste será de 10%.
 *
 *  Sua missão é elaborar um algoritmo que, a partir de dados inseridos pelo usuário, calcular o salário reajustado
 *  de um funcionário, exibindo, como resultado, seu nome, o valor de seu salário atual e o valor do salário reajustado.
 *
 *  (Obs: apenas o pseudocódigo é necessário)
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    string nome;
    double salario_atual = 0, salario_reajuste = 0;

    cout << "Esse programa calcula o reajuste do seu salario!" << endl;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite seu salario atual: ";
    cin >> salario_atual;

    if (salario_atual <= 4000) {
        salario_reajuste = salario_atual + (salario_atual * 0.14);
    } else {
        salario_reajuste = salario_atual + (salario_atual * 0.10);
    }

    // Delimitando 2 casas decimais
    cout << setprecision(2) << fixed;
    cout << endl;

    cout << "Seu nome eh: " << nome << endl;
    cout << "Seu salario atual eh: R$ " << salario_atual << endl;
    cout << "Seu salario com reajuste eh: R$ " << salario_reajuste << endl;

    return 0;
}