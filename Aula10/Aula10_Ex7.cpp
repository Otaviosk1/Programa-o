#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    char nome[10];

    fstream arquivo;
    arquivo.open("BSItexto1.txt",ios::app);/* ios::app impede de reescrever o arquivo, apenas continua*/
    if(arquivo.is_open()){
        cout << "Digite seu nome: " << endl;
        cin >> nome;
        arquivo << "Digite seu nome: " << endl;
        arquivo << nome << endl;
        arquivo.close();
    }
    else{
        cout << "Erro!!!";
    }

    return 0;
}
