#include <iostream>
#include <locale>

using namespace std;

void oi(void){
    cout << "Oi, essa � o primeiro exemplo de defini��o de FUN��O em C++." << endl;
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
