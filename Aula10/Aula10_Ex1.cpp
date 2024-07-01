#include <iostream>

using namespace std;

void troca(int &x, int &y){

    int temp;

    temp = x;
    x = y;
    y = temp;

}

int main (){

    int a,b;

    cout << "Digite dois valores: " << endl;
    cin >> a >> b;

    cout << a << " " << b << endl;

    troca(a,b);

    cout << a << " " << b << endl;

    return 0;
}

/*#include <iostream>

using namespace std;

int main (){

    int a,b, temp;

    cout << "Digite dois valores: " << endl;
    cin >> a >> b;

    cout << a << " " << b << endl;

    temp = a;
    b = a;
    b = temp;

    cout << a << " " << b << endl;

    return 0;
}*/

/*modo que não dá certo sem &
#include <iostream>

using namespace std;

void troca(int x, int y){

    int temp;

    temp = x;
    x = y;
    y = temp;

}

int main (){

    int a,b;

    cout << "Digite dois valores: " << endl;
    cin >> a >> b;

    cout << a << " " << b << endl;

    troca(a,b);

    cout << a << " " << b << endl;

    return 0;
}
