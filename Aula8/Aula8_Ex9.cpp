#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>

using namespace std;

int main(){

    int i,j,m,n;

    cout << "Defina o número de linhas da sua matriz: ";
    cin >> m;

    cout << "Defina o número de linhas da sua matriz: ";
    cin >> n;

    int matriz1[m][n];
    int matriz2[m][n];

    cout << endl;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << "DIgite o valor para  preencher a primeira matriz [" << i+1 << ", " << j+1 << "]: ";
            cin >> matriz1[i][j];
        }
    }

    cout << endl;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << "DIgite o valor para  preencher a segunda matriz [" << i+1 << ", " << j+1 << "]: ";
            cin >> matriz2[i][j];
        }
    }

    cout << endl;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << "\nValor da terceira matriz [" << i+1 << ", " << j+1 << "]: " << matriz1[i][j]+matriz2[i][j];
        }
    }

    cout << endl;

    return 0;
}
