#include <iostream>

using namespace std;

float capacidade(float, float, float);

int main(){

    float comp, larg, alt;

    cout << "Programa para calcular a cpacidade de água de uma pisicina: " << endl << endl;
    cout << "Digite o comprimento da piscina: ";
    cin >> comp;
    cout << "\nDigite o larg da piscina: ";
    cin >> larg;
    cout << "\nDigite o altura da piscina: ";
    cin >> alt;
    cout << "\nA piscina possui: " << capacidade(comp, larg, alt) << " metros cúbicos.";

    return 0;
}

float capacidade(float comp, float larg, float alt){
    float resultado;
    resultado = comp*larg*alt;
    return resultado;
}
