#include <iostream>
#include <fstream>
#include <locale>

using namespace std;

int main(){

    string abc;

    ifstream HELLO;
    HELLO.open("HELLO.txt");
    if(HELLO.is_open()){
        while(!HELLO.eof()){ /*retorna true ao atingir o final*/
            getline(HELLO, abc);
            cout << abc << endl;
        }
    HELLO.close();
    }

    else{
        cout << "Erro!!!";
    }

    return 0;
}
