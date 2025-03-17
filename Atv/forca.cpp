#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char palavra[30], secreta[30], opc;
    int chances = 6;

cout << "Digite a palavras secreta: ";
cin >> secreta;

do{

    cout << "Digite a palavra: ";
    cin >> palavra;

int posCerta = 0;

    for(int i=0; palavra[i] && secreta[i]; i++){
        if(palavra[i] == secreta[i]){
            cout << "A letra " << palavra[i] << " esta na posicao certa! \n";
            posCerta++;
        }
    }

int qtdLetras = 0;

    for(int i=0; palavra[i]; i++){
        for(int j=0; secreta[j]; j++){
            if(palavra[i] == secreta[j]){
                qtdLetras++;
            }
        }
    }

    cout << "Voce acertou " << qtdLetras << " letras !!! \n";

    if(strcmp(palavra,secreta) == 0){
        cout << "Parabens voce acertou a palavra !!!";
        break;
    }else {
        chances--;
        cout << "Voce tem mais " << chances << " chances. \n";
        cout << "Letras corretas na posicao certa: " << posCerta << "\n";
        cout << "Letras corretas na posicao errada: " << qtdLetras - posCerta << "\n";
    }

    if(chances > 0){
    cout << "Deseja continuar ? s/n";
    cin >> opc;
    }

    if(chances < 0){
        cout << "Voce perdeu !!!";
        break;
    }

}while(chances > 0 && (opc == 's' or opc == 'S'));

    if(chances == 0 && (opc == 'n' or opc == 'N')){
        cout << "Fim de jogo! A palavra secreta era: " << secreta << "\n";
    }

    return 0;
}