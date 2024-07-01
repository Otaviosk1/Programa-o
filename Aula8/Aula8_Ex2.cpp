#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>

using namespace std;

int main(){

    int matriz[3][3][3];
    int i,j,k;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                cout << "Digite o valor para  preencher a matriz [" << i+1 << ", " << j+1 << ", " << k+1 << "]: ";
                cin >> matriz[i][j][k];
            }
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            for(k=0; k<3; k++){
                cout << "\nValor para  preencher a matriz [" << i+1 << ", " << j+1 << ", " << k+1 << "]: " << matriz[i][j][k];
            }
        }
    }

    cout << endl;

    return 0;
}
