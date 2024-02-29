#include <iostream>

using namespace std;


int main()
{
    float massa;
    float altura;
    double imc;
    
    do 
    {
     cout << "Massa corporal: "; 
     cin >> massa; 
    }
    while (massa < 0);

    do 
    {
     cout << "Altura: "; 
     cin >> altura; 
    }
    while (altura < 0);

    imc = massa/(altura*altura);
    
    //std::cout << imc;
    
    if (imc < 17)
    {
        std::cout<<"Cuidado! Muito abaixo do peso";
    }
    
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
        std::cout<<"Obesidae Mórbida!!!!!!";
    }

    return 0;
}
