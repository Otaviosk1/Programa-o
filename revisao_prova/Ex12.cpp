#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

float imc(float peso, float altura){
    float resultado;
    resultado = peso/(altura*altura);
    return resultado;
}

int main()
{
    int num,i;

    cout << "Quantos IMCs você vai calcular: ";
    cin >> num;
    fflush(stdin);

    struct Ex12
    {
        char nome[30];
        float peso;
        float altura;
    }IMC[num];

    for(i = 0; i < num; i++){
        cout << "\nInforme o nome do cliente: ";
        cin.getline(IMC[i].nome, 30);
        fflush(stdin);

        cout << "Informe o peso do cliente: ";
        cin >> IMC[i].peso;
        fflush(stdin);

        cout << "Informe o altura do cliente: ";
        cin >> IMC[i].altura;
        fflush(stdin);

        cout << "O IMC é: " << imc(IMC[i].peso,IMC[i].altura);
        cout << endl;
    }

    return 0;
}
