#include <iostream>

using namespace std;

void texto(); // Tem que prototipar antes, declarar;
void soma(int a, int b);
int soma2(int n1, int n2);
void imprimir(string tra[4]);

int main(){
    int res;
    string transp[4]={"carro","moto","barco","aviao"};

    texto();
    soma(15,5);
    res = soma2(175,25);
    cout << "Resultado: " << res << "\n";

    imprimir(transp);
    
return 0;
}

void texto(){
    cout << "\nOla\n";
}

void soma(int a, int b){
    cout << "Soma dos valores: " << a + b << "\n";
}

int soma2(int n1, int n2){
    return n1+n2;
}

void imprimir(string tra[4]){
    for(int i=0; i<4; i++){
        cout << tra[i] << "\n";
    }

}