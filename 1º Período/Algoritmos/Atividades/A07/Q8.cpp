/*
 *  8) Foi realizada uma pesquisa de algumas características físicas da população de uma região, que coletou os seguintes dados de cada habitante:
 *  (a) sexo (masculino ou feminino).
 *  (b) cor dos olhos (azuis, verdes ou castanhos).
 *  (c) cor dos cabelos (louros, castanhos ou pretos).
 *  (d) idade.
 *  (e) altura.
 *  (f) peso/massa.
 *
 *  Para que seja possível fazer um diagnóstico desta população, crie um algoritmo que calcule e apresente:
 *
 *  - A média de idade dos participantes.
 *  - A média de massa corporal dos seus habitantes.
 *  - A porcentagem de pessoas do sexo feminino.
 *  - A porcentagem de pessoas do sexo masculino.
 *  - Quantas pessoas possuem olhos verdes e cabelos castanhos.
 *
 *  Os resultados somente deverão ser apresentados quando o usuário informar que encerrou a entrada de dados.
 *
 *  Compile aqui: https://www.onlinegdb.com/online_c++_compiler
 */

#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i = 0;
    int sexo_f = 0, sexo_m = 0;
    int olhos_verdes = 0, cabelos_castanhos = 0;
    int olhos_verdes_e_cabelos_castanhos = 0;
    int idade, idade_soma = 0;
    int altura, altura_soma = 0;
    int peso, peso_soma = 0;
    char resp;

    cout << "Este programa mostra dados sobre os habitantes de uma determinada região!" << endl;
    cout << endl;

    do {
        int op;

        cout << "------- DADOS DO " << i + 1 << "º ENTREVISTADO -------" << endl;
        cout << endl;

        cout << "---- SEXO -----" << endl;
        cout << "1 - FEMININO" << endl;
        cout << "2 - MASCULINO" << endl;
        cout << endl;
        cout << "Digite o número da opção: ";
        cin >> op;
        if (op == 1) {
            sexo_f++;
        } else if (op == 2) {
            sexo_m++;
        }
        cout << endl;
        cout << endl;

        cout << "---- COR DOS OLHOS -----" << endl;
        cout << "1 - AZUIS" << endl;
        cout << "2 - CASTANHOS" << endl;
        cout << "3 - VERDES" << endl;
        cout << endl;
        cout << "Digite o número da opção: ";
        cin >> op;
        if (op == 3) {
            olhos_verdes = 1;
        } else {
            olhos_verdes = 0;
        }
        cout << endl;
        cout << endl;

        cout << "---- COR DOS CABELOS -----" << endl;
        cout << "1 - LOUROS" << endl;
        cout << "2 - CASTANHOS" << endl;
        cout << "3 - PRETOS" << endl;
        cout << endl;
        cout << "Digite o número da opção: ";
        cin >> op;
        if (op == 2) {
            cabelos_castanhos = 1;
        } else {
            cabelos_castanhos = 0;
        }
        cout << endl;

        if (olhos_verdes && cabelos_castanhos) {
            olhos_verdes_e_cabelos_castanhos++;
        }

        cout << "Idade: ";
        cin >> idade;
        idade_soma += idade;
        cout << endl;

        cout << "Altura (cm): ";
        cin >> altura;
        altura_soma += altura;
        cout << endl;

        cout << "Peso (kg): ";
        cin >> peso;
        peso_soma += peso;
        cout << endl;

        cout << "Deseja adicionar outro habitante? [S / N]: ";
        cin >> resp;
        cout << endl;

        system("clear");

        i++;
    } while (resp == 'S');

    double media_idade = idade_soma / i;
    double media_peso = peso_soma / i;
    double percentual_feminino = (sexo_f / i) * 100;
    double percentual_masculino = (sexo_m / i) * 100;

    cout << fixed << setprecision(0);

    cout << "Média de idade dos habitantes: " << media_idade << " anos." << endl;
    cout << "Média de peso dos habitantes: " << media_peso << " kg." << endl;
    cout << "Percentual de pessoas do sexo feminino: " << percentual_feminino << "%." << endl;
    cout << "Percentual de pessoas do sexo masculino: " << percentual_masculino << "%." << endl;
    cout << "Pessoas com olhos verdes e cabelos castanhos: " << olhos_verdes_e_cabelos_castanhos << "pessoas." << endl;

    return 0;
}