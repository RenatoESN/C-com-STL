#include <iostream>
#include <string>
using namespace std;

int **ppi;

template <typename T>
void imprime(T i, string s){
    cout << "Endereco de " << s << " = " << i << endl;
    cout << "Valor de " << s << " = " << *i << endl;
    cout << endl << endl;
}
int main (){
    int i;
    int *pi;
    int ***pppi;
    i = 27;
    pi = &i;
    ppi = &pi;
    pppi = &ppi;
    imprime <int*>(&i, "i");
    imprime <int**>(&pi, "pi");
    imprime <int***>(&ppi, "ppi");
    imprime <int****>(&pppi, "pppi");
    return 0;
}
