#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main(){

    ofstream ArquivoFOR;
    ArquivoFOR.open("ArquivoFOR.txt");
    if(ArquivoFOR.is_open()){
        for(int i=0; i < 10; i++){
                cout << "Salvando os dados de: " << i+1 << endl;
                ArquivoFOR << "Salvando os dados de: " << i+1 << endl;
        }
        ArquivoFOR.close();
    }
    else{
        cout << "Erro!!!";
    }

    return 0;
}
