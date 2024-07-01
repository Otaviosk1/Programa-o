#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor [10], soma=0;
    int i;

    for(i=0; i<10; i++){
        cout << "Digite um número: ";
        cin >> vetor[i];
    }
    cout << "Os valores digitados foram: ";
    cout << endl;

    for(i=0; i<10; i++){
        cout << vetor[i] << " - ";
        soma += vetor[i];
    }
    cout << "\nA soma dos vetores digitados é: " << soma << endl;

    return 0;
}
