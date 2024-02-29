#include <iostream>

using namespace std;

int main()
{   // Definido as variáveis
    int ano;
    
    //Requisitando do usuário um input
    cout << "Insira o ano:";
    // Armazenando o input
    cin >> ano;

    // Primeira condição, uma complementa a outra
    if (ano % 4 == 0 && ano % 100 !=0)
    {
        cout << "Uau um ano bissexto, com 366 dias ;)";
    }
    // Segunda condição, independente das outras
    else if (ano % 400 == 0)
    {
        cout << "Uau um ano bissexto, com 366 dias ;)";
    }

    // Caso False para todas as condições
    else
    {
        cout << "Que pena, um ano com apenas 365 dias :( ";
    }

    return 0;
}