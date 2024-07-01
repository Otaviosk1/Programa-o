#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL,"Portuguese");

    int num;

    cout << "Quantidade de alunos que deseja cadastrar: ";
    cin >> num;
    fflush(stdin);

    struct EstruturaAluno{
        char nome_aluno[60];
        char nome_mae[50];
        char matricula[15];
        int anoIngresso;
        int quant_PC;
        int ano_nascimento;

    }strAluno[num];

    int i;
    for(i = 0; i < num; i++){
        cout << "\nInforme o nome do aluno: ";
        cin.getline(strAluno[i].nome_aluno, 60);
        cout << "Informe o nome da mãe do aluno: ";
        cin.getline(strAluno[i].nome_mae, 60);
        cout << "Informe a matrícula do aluno: ";
        cin >> strAluno[i].matricula,15;
        cout << "Informe o ano de ingresso: ";
        cin >> strAluno[i].anoIngresso;
        cout << "Informe a quantidade de computadores em sua casa: ";
        cin >> strAluno[i].quant_PC;
        cout << "Informe o ano de nascimento: ";
        cin >> strAluno[i].ano_nascimento;
        fflush(stdin);
        cout << endl;
    }
    cout << "\nAlunos cadastrados com sucesso!!!\n\n";
    for(i=0; i < num; i++){
        cout << "Nome do aluno: " << strAluno[i].nome_aluno << endl;
        cout << "Nome da mãe do aluno: " << strAluno[i].nome_mae << endl;
        cout << "Matrícula do aluno: " << strAluno[i].matricula << endl;
        cout << "Ano de ingresso do aluno: " << strAluno[i].anoIngresso << endl;
        cout << "Quantidade de computadores em sua casa: " << strAluno[i].quant_PC << endl;
        cout << "Ano de nascimento: " << strAluno[i].ano_nascimento << endl << endl;
    }
    return 0;
}
