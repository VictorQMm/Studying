#include <iostream>

using namespace std;

void soma(int n1, int n2);
void soma();

int main(){
    // sobrecarga de funções
    soma(20,30);
    soma();

return 0;
}


void soma(int n1, int n2){
    int soma;
    soma = n1 + n2;
    cout << "Soma de " << n1 << " com " << n2 << " eh igual a: " << soma << "\n";
}

void soma(){
    int n1=10, n2=20, soma;
    soma = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " eh igual a: " << soma << "\n";
}

// omissão de argumentos e padrões