#include <iostream>
#include <locale>

using namespace std;

float imc(float peso, float altura){
    float resultado;

    resultado = peso/(altura*altura);
    return resultado;
}

int main()
{
    float peso, altura;
    
    cout << "Digite seu peso: ";
    cin >> peso;
    cout << "\nDigite sua altura em metros: ";
    cin >> altura;

    cout << "Seu IMC é: " << imc(peso,altura);
    cout << endl;

    return 0;
}
