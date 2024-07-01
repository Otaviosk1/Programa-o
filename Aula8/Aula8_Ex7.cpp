#include <iostream>
#include <cstdlib>
#include <locale>
#include <cstring>

using namespace std;

int main(){

    int i,j;
    int m,n;

    cout << "Defina o número de linhas da sua matriz: ";
    cin >> m;

    cout << "Defina o número de linhas da sua matriz: ";
    cin >> n;

    int matriz[m][n];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            cout << "DIgite o valor para  preencher a matriz [" << i+1 << ", " << j+1 << "]: ";
            cin >> matriz[i][j];
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if(i==j){
                cout << "\nValor da matriz [" << i+1 << ", " << j+1 << "]: " << matriz[i][j];
            }
        }
    }

    cout << endl;

    return 0;
}
