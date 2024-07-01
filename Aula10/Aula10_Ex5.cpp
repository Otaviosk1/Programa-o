#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("BSItexto.txt");
    arquivo << "Ivan" << endl;
    arquivo << "Rebecka" << endl;
    arquivo.close();

    return 0;
}
