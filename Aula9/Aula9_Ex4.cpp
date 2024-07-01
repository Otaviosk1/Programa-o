#include <iostream>
#include <locale>

using namespace std;

void cumprimenta(char inicial1, char inicial2){
    cout << "Olá, meu amigo " << inicial1 << inicial2 << "!" << endl;
}

int main(){

    setlocale(LC_ALL,"Portuguese");

    char primeiro, segundo;

    cout << "Entre com duas iniciais (sem separação): ";
    cin >> primeiro >> segundo;

    cumprimenta(primeiro, segundo);

    return 0;
}
