#include <iostream>

using namespace std;

int FuncaoRecursiva(int num)
{
  if (num == 0) {
    return 1;
  }
  else {
    return num * FuncaoRecursiva(num-1);/*eu fico chamando repetidamente a fun��o at� o num chegar a zero e sair da fun��o*/
  }
}

/*int fatorialsemrec(int num)
{
  int f, i;
  if (num == 0) {
    return 1;
  }
  else {
   f = 1;
   for(i= num; i > 1; i--){
     f = f * i;
   }
    return f;
  }
}*/

int main(){

    int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;


    cout << "\nO resultado em fatorial �: " << FuncaoRecursiva(num) << endl;

    return 0;
}
