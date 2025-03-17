#include <iostream>
using namespace std;

int main(){

    int cod;
    cout << "Insira o produto: \n";
    cout << "[1] Carro   [2] Moto   [3] Aviao   [4] Helicoptero\n"; 
    cin >> cod;

    switch (cod){
        case 1:
        case 2:
            cout << "Transporte Terrestre\n";
            switch(cod){
                case 1:
                    cout << "Carro selecionado\n";
                    break;
                case 2:
                    cout << "Moto selecionada\n";
                    break;
            }
            break;
            
        case 3:
        case 4:
            cout << "Transporte Aereo\n";
            switch(cod){
                case 3:
                    cout << "Aviao selecionado\n";
                    break;
                case 4:
                    cout << "Helicoptero selecionado\n";
                    break;
            }
            break;
        default:
            cout << "Opção inválida\n";
            break;
    }
       
    return 0;
}