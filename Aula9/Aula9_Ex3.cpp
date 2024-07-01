#include <iostream>
#include <locale>

using namespace std;

void oi(void){
    cout << "Oi, essa é o primeiro exemplo de definição de FUNÇÃO em C++." << endl;
    cout << "Ainda veremos outros exemplos." << endl;
}

int main(){

    setlocale(LC_ALL, "Portuguese");

    int i=1;

    while(i <= 5){
        oi();
        i += 1;
    }


    return 0;
}
