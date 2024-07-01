#include <iostream>
#include <locale>

using namespace std;

int main(){

    
    int i,j;
    float matriz [4][5],matriz2 [4][5];

    for(i=0; i<4; i++){   
        for(j=0; j<5; j++){
        cout << "Digite um valor para a posição " << i+1 << ", " << j+1 << " da matriz: ";
        cin >> matriz [i][j];
        cout << endl;
        }
    }
    cout << "Os valores da matriz são: " << endl; 
    for(i=0; i<4; i++){   
        for(j=0; j<5; j++){
            cout << matriz [i][j] << "      ";
                if(j==4){
                    cout << endl;
                }
        }
    } 
    for(i=0; i<4; i++){   
        for(j=0; j<5; j++){
            matriz2[i][j] = matriz[i][j]/2;
        }
    }
    cout << "A matriz com os valores resultantes: " << endl; 
    for(i=0; i<4; i++){   
        for(j=0; j<5; j++){
            cout << matriz2 [i][j] << "      ";
                if(j==4){
                    cout << endl;
                }
        }
    } 

    return 0;
}
