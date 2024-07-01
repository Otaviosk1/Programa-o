#include <iostream>
#include <locale>

using namespace std;

int main(){
    
    int i,j;
    int matriz[4][4];

    for(i=0; i < 4; i++){
        for(j=0; j < 4; j++){
            cout << "Digite um valor para a posição " << i+1 << ", " << j+1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nOs valores da matriz são: \n";
    for(i=0; i < 4; i++){
        for(j=0; j < 4; j++){
            cout << matriz[i][j] << "       ";
            if(j==3){
                cout << endl;
            }
        }
    }


    return 0;
}
