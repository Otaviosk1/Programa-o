#include <iostream>

using namespace std;

float celsius(float fah){
    int cel;
    cel = (fah - 32)*5/9;
}

int main(){

    float fah;

    cout << "Digite uma temperatura de graus fahrenheit: ";
    cin >> fah;

    cout << "\nA temperatura em graus celsius é: " << celsius(fah) << endl;

    return 0;
}
