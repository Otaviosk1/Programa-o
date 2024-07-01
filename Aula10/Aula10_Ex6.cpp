#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("BSItexto.txt",ios::app);/* ios::app impede de reescrever o arquivo, apenas continua*/
    if(arquivo.is_open()){
        arquivo << "Raquel" << endl;
        arquivo << "Maria" << endl;
        arquivo.close();
    }
    else{
        cout << "Erro!!!";
    }

    return 0;
}
