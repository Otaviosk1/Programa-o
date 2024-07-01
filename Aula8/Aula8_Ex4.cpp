#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>

using namespace std;

int main(){

    int matriz[3][3];
    int i,j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            cout << "DIgite o valor para  preencher a matriz [" << i+1 << ", " << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i!=j){
                cout << "\nValor da matriz [" << i+1 << ", " << j+1 << "]: " << matriz[i][j];
            }
        }
    }

    cout << endl;

    return 0;
}
