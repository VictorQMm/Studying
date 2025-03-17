#include <iostream>
using namespace std;

int main(){
    //Operadores Ternários tem desempenho melhor que o if else
    // (condicao) ? valor_se_verdadeiro : valor_se_falso // ? = if, : = else

    int n1,n2, nota;
    string res;

    cout << "Digite a primeira nota do aluno: ";
    cin >> n1;

    cout << "Digite a segunda nota do aluno: ";
    cin >> n2;

    nota = n1+n2;

    // >= 60 Aprovado
    // <60 Reprovado

    //(nota >= 60) ? res = " Aprovado." : res = " Reprovado.";

    res = (nota >= 60) ? " Aprovado." : " Reprovado.";

    cout << "O aluno foi" << res << "\n";


    return 0;
}   

// int main(){
//   int n1,x;
   
//    x=5;

//    cout << "Digite um valor: ";
//    cin >> n1;

//    (n1 >= 5) ? x++ : x--;

//    cout << "O valor de x é: " << x << "\n";


//}