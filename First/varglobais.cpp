#include <iostream>

using namespace std;

int n1,n2; // Variáveis globais

int main(){
    //Operadores matemáticos + - * / % ()

    int n3,n4; // Variáveis locais
    int res,res1,res2, res3;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1 + n2 + n3 + n4) - 10;
    res1 = n1+n2*n4;
    res2 = n1/n3;   
    res3 = n1%n3; 
    

    cout << "Soma: " << res << "\n";
    cout << "Multiplicacao: " << res1 << "\n";
    cout << "Divisao: " << res2 << "\n";
    cout << "Resto da divisao: " << res3 << "\n";

    return 0;
}