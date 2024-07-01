#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor [8], mult=0;
    int i;

    for(i=0; i<10; i++){
        cout << "Digite um número: ";
        cin >> vetor[i];
    }
    cout << "Os valores digitados foram: ";
    cout << endl;

    for(i=0; i<8; i++){
        cout << vetor[i] << " - ";
        
        if(vetor[i]%3 == 0){
            mult += 1;
        }
    }
    cout << "\nForam digitados " << mult << " números múltiplos de 3." << endl;

    return 0;
}
