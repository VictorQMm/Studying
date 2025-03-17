#include <iostream>
#include <stdlib.h> // system

using namespace std;

int main(){
    int num1 = 10;
    int num2 = 20;
    char opc;
    

// >, <, >=, <=, ==, !=
    if(num1 < num2){
        cout << "vdd\n";
    }else{
        cout << "fake\n";
    }

    int n1,n2,res;

inicio:
system ("cls"); // limpar a tela

    cout << "Digite o valor da nota 1: ";
    cin >> n1;

    cout << "Digite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    if(res >= 60){
        cout << "Aprovado\n";
    }else if(res >= 40){
        cout << "Recuperacao\n";
    }else{
        cout << "Reprovado\n";
}

    cout << "Deseja digitar outras notas? (s/n): ";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio; // go to = vá para
    }

    return 0;
}