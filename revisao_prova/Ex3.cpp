#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int vetor1 [10], vetor2 [10], vetor3 [10];
    int i,i2,i3;

    for(i=0; i<10; i++){
        cout << "Digite os números do vetor 1: ";
        cin >> vetor1[i];
    }

    cout << endl;

    for(i2=0; i2<10; i2++){
        cout << "Digite os números do vetor 2: ";
        cin >> vetor2[i2];
    }
    cout << "\nOs valores digitados no vetor 1 foram: ";
    for(i=0; i<10; i++){
        cout << vetor1[i] << " - ";
    }
    
    cout << "\nOs valores digitados no vetor 2 foram: ";
    for(i2=0; i2<10; i2++){
        cout << vetor2[i2] << " - ";
    }
    
    for(i3=0; i3<10; i3++){
        vetor3[i3] = vetor1[i3] * vetor2[i3];
    }

    cout << "\nOs valores digitados no vetor 3 foram: ";
    for(i3=0; i3<10; i3++){
        cout << vetor3[i3] << " - "; 
    }


    return 0;
}