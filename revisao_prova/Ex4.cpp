#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float nota1[16], nota2[16], media[16];
    int i=0;

    for(i=1; i <= 15; i++){
        cout << "Digite a nota da P1 do aluno " << i << ": ";
        cin >> nota1[i];
        fflush(stdin);
        cout << "Digite a nota da P2 do aluno " << i << ": ";
        cin >> nota2[i];
        fflush(stdin);
        cout << endl;
    }

    cout << "Situação dos alunos: " << endl;

    for(i=1; i <= 15; i++){
        media[i] = (nota1[i]+nota2[i])/2;
        cout << "Aluno " << i << ":   P1 = " << nota1[i] << "    P2 = " << nota2[i] << endl;
        cout << "Média = " << media [i] << endl;
        if(media[i] >= 6){
            cout << "Aprovado" << endl;
        }
        else{
            cout << "Reprovado" << endl;
        }
    }

    return 0;
}
