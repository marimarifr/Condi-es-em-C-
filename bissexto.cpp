#include <iostream>

using namespace std;

int main()
{
    int ano;
        
    cout << "Insira o ano:";
    cin >> ano;

    if (ano % 4 == 0 && ano % 100 !=0)
    {
        cout << "Uau um ano bissexto, com 366 dias ;)";
    }
    else if (ano % 400 == 0)
    {
        cout << "Uau um ano bissexto, com 366 dias ;)";
    }

    else
    {
        cout << "Que pena, um ano com apenas 365 dias :( ";
    }

    return 0;
}