#include <iostream>

using namespace std;


int main()
{   //definido as variáveis necessárias
    float massa;
    float altura;
    double imc;
    
    do 
    {// Requisitando as informações do usuário
     cout << "Massa corporal: "; 
     cin >> massa; 
    } // Valores negativos serão desconsiderados
    while (massa < 0);

    do 
    { // Requisitando do usuário
     cout << "Altura: "; 
     cin >> altura; 
    } // Valores negativos serão ignorados
    while (altura < 0);

    //Calculando o imc com as variáveis
    imc = massa/(altura*altura);
    
    // Definindo as categorias do imc e alertando ao usuário
    if (imc < 17)
    {
        std::cout<<"Cuidado! Muito abaixo do peso";
    }
    // Condições complementares
    else if ( imc >= 17 && imc < 18.5 )
    {
        std::cout<<"Abaixo do peso";
    }
    
    else if ( imc >= 18.5 && imc < 25 )
    {
        std::cout<<"Peso Normal!";
    }

    else if ( imc >= 25 && imc < 30 )
    {
        std::cout<<"Acima do peso";
    }

    else if ( imc >= 30 && imc < 35 )
    {
        std::cout<<"Obesidade!";
    }

    else if ( imc >= 35 && imc < 40 )
    {
        std::cout<<"Obesidade Severa!!!";
    }

    else if ( imc >= 40 )
    {
        std::cout<<"Obesidade Mórbida!!!!!!";
    }

    return 0;
}
