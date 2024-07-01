#include <iostream>
#include <locale>

using namespace std;

int main(){

    int i, vetor[10] = {10,9,8,7,6,5,4,3,2,1};

    for(i=0; i<10; i++){
        cout << vetor[i] << " - ";
    }
    cout << endl;
    for(i=9; i>=0; i--){
        cout << vetor[i] << " - ";
    }


    return 0;
}
