#include <iostream>
#include <locale>

using namespace std;

int main(){
    
    int i,j;
    int matriz[6][6];

    for(i=0; i < 6; i++){
        for(j=0; j < 6; j++){
            cout << "Digite um valor para a posição " << i+1 << ", " << j+1 << " da matriz: ";
            cin >> matriz[i][j];
        }
    }
    cout << "\nOs valores da matriz são: \n";
    for(i=0; i < 6; i++){
        for(j=0; j < 6; j++){
            cout << matriz[i][j] << "       ";
            if(j==5){
                cout << endl;
            }
        }
    }
    cout << "\nOs valores da diagonal secundária são: \n";
    
    for(i=0; i < 6; i++){
        for(j=0; j < 6; j++){
            if(j == 5-i){
                cout << matriz[i][j] << endl;
                if(j == 5){
                    cout << endl;
                }
            }
            else if(j != 5-i){
                cout << "       ";
                if(j == 5){
                    cout << endl;
                }
            }
        }
    }

    return 0;
}
