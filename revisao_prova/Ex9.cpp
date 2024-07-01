#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    int num;

    cout << "Quantos animais você vai cadastrar? ";
    cin >> num;
    fflush(stdin);

    struct Petshop
    {
        char nome [20];
        char especie [20];
        char raca [25];
        char sexo [15];
        char idade[10];
        char dono[30];
        char rg[25];
        char tel[25];
    }pet[num];

    for(int i=0;i < num; i++){
        cout << "\nInforme o nome do pet: ";
        cin.getline(pet[i].nome, 20);
        fflush(stdin);

        cout << "Informe a espécie do pet: ";
        cin.getline(pet[i].especie, 20);
        fflush(stdin);

        cout << "Informe a raça do pet: ";
        cin.getline(pet[i].raca, 25);
        fflush(stdin);

        cout << "Informe o sexo do pet: ";
        cin.getline(pet[i].sexo, 15);
        fflush(stdin);

        cout << "Informe a idade do pet: ";
        cin.getline(pet[i].idade,10);
        fflush(stdin);

        cout << "Informe o nome do dono: ";
        cin.getline(pet[i].dono, 30);
        fflush(stdin);

        cout << "Informe o RG do dono do pet: ";
        cin.getline(pet[i].rg,25);
        fflush(stdin);

        cout << "Informe o telefone do dono do pet: ";
        cin.getline(pet[i].tel,25);
        fflush(stdin);

    }

    for(int i=0; i < num; i++){
        cout << "\n\nCliente cadastrado com sucesso!!!" << endl;
        cout << "Nome do pet: " << pet[i].nome;
        cout << "\nEspécie do pet: " << pet[i].especie;
        cout << "\nRaça do pet: " << pet[i].raca;
        cout << "\nSexo do pet: " << pet[i].sexo;
        cout << "\nIdade do pet: " << pet[i].idade;
        cout << "\nNome do dono do pet: " << pet[i].dono;
        cout << "\nRG do dono do pet: " << pet[i].rg;
        cout << "\nTelefone do dono do pet: " << pet[i].tel;
    }
    


    return 0;
}
