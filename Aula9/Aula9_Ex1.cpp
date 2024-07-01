#include <iostream>
#include <cstring>
#define NALUNO 3

using namespace std;

int main(){

    struct EstruturaAluno{
        char nome[60];
        char matricula[10];
        int anoIngresso;
    }strAluno[NALUNO];

    int i;
    for(i = 0; i < NALUNO; i++){
        cout << "Informe o nome do aluno: ";
        cin.getline(strAluno[i].nome, 60);
        cout << "Informe a matrícula do aluno: ";
        cin.getline(strAluno[i].matricula, 10);
        cout << "Informe o ano de ingresso: ";
        cin >> strAluno[i].anoIngresso;
        fflush(stdin);
        cout << endl;
    }
    cout << "\nAlunos cadastrados com sucesso!!!\n\n";
    for(i=0; i < NALUNO; i++){
        cout << "Nome do aluno: " << strAluno[i].nome << endl;
        cout << "Matrícula do aluno: " << strAluno[i].matricula << endl;
        cout << "Ano de ingresso do aluno: " << strAluno[i].anoIngresso << endl << endl;
    }
    return 0;
}
