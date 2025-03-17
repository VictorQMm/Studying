#include <iostream>

using namespace std;

int main(){
    // and, or, not (&&, ||, !)

    int num = 5;
    if(num > 4 && num < 7){  // As duas condicoes tem que ser verdadeiras
        cout << "Valor aceito\n";
    }else{
        cout << "Valor nao aceito\n";
    }

    int num2 = 5;
    if(num2 > 3 || num2 > 8){   // Pelo menos uma das condicoes tem que ser verdadeira
        cout << "Valor aceito\n";
    }else{
        cout << "Valor nao aceito\n";
    }

    int num3 = 1; // 1 = true, 0 = false
    if(!num3){  // Inverte o valor da condicao
        cout << "True\n";
    }else{
        cout << "False\n";
    }

    return 0;
}