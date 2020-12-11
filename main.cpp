#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <locale.h>

using namespace std;

#include "Calculadora/Calculadora.h"
#include "Digito/Digito.h"
#include "Verificadora/Verificadora.h"

int main()
{
    Calculadora calc;
    string stringNum1, stringNum2;
    unsigned int baseNumerica = 0;

    cout << " __________________________________________________________________________ " << endl;
    cout << "|                                                                          |" << endl;
    cout << "|  Sejam bem-vindos ao nosso aplicativo de operacoes com bases numericas!  |" << endl;
    cout << "|                                                                          |" << endl;
    cout << "|                     Trabalho desenvolvido em C++ por:                    |" << endl;
    cout << "|                      Bruno Arnone Franchi    - 19164                     |" << endl;
    cout << "|                      Enzo Furegatti Spinella - 19168                     |" << endl;
    cout << "|                                                                          |" << endl;
    cout << "|__________________________________________________________________________|" << endl << endl;

    char opcao = ' ';
    do
    {
        cout << "           Escolha a sua operacao!           " << endl;
        cout << " ___________________________________________ " << endl;
        cout << "|                                           |" << endl;
        cout << "|             '+' para Adicao               |" << endl;
        cout << "|            '-' para Subtracao             |" << endl;
        cout << "|  'X', 'x', '*' ou '.' para Multiplicacao  |" << endl;
        cout << "|          '/' ou ':' para Divisao          |" << endl;
        cout << "|            'S' ou 's' para Sair           |" << endl;
        cout << "|___________________________________________|" << endl << endl;

        cout << "\tOperacao: ";
        cin >> opcao;
        cout << "\tOperacao Escolhida: ";
        switch(opcao)
        {
            case '+':
                cout << "Adicao!" << endl;
                break;
            case '-':
                cout << "Subtracao!" << endl;
                break;
            case 'X':
            case 'x':
            case '.':
            case '*':
                cout << "Multiplicacao!" << endl;
                break;
            case '/':
            case ':':
                cout << "Divisao!" << endl;
                break;
            case 'S':
            case 's':
                cout << "NENHUMA HAHAHA" << endl;
                cout << "\t...Saindo..." << endl;
                break;
        }
        while(!Verificadora::operacaoValida(opcao))
        {
            cout << "O simbolo digitado eh invalido! Exemplos de simbolos validos: (X x * . / : + - s S) Digite novamente: ";
            cin >> opcao;
        };
        cout << endl;

        if(opcao == 'S' || opcao == 's')
            return 0;

        cout << "Digite a base dos numeros: ";
        cin >> baseNumerica;
        while(!Verificadora::baseValida(baseNumerica))
        {
            cout << "A base digitada eh invalida! Digite uma valida: ";
            cin >> baseNumerica;
        };

        cout << "Digite o primeiro numero: ";
        cin >> stringNum1;
        while(!Verificadora::numeroValido(stringNum1, baseNumerica))
        {
            cout << "O numero digitado eh invalido! Digite o primeiro numero novamente: ";
            cin >> stringNum1;
        };

        cout << "Digite o segundo numero: ";
        cin >> stringNum2;
        while(!Verificadora::numeroValido(stringNum2, baseNumerica))
        {
            cout << "O numero digitado eh invalido! Digite o segundo numero novamente: ";
            cin >> stringNum2;
        };

        cout << stringNum1 << " " << stringNum2 << " " << baseNumerica << endl;

        // A PARTIR DAQUI A LÓGICA DE VERDADE, EH ESTE MARCO QUE SEPARA OS/AS MENINOS/MENINAS DOS/DAS HOMENS/MULHERES


    }
    while (opcao != 'S' && opcao != 's');

};

