#include <iostream>
using namespace std;

int main(){

    int vetor[5];

    vetor[0] = 10;
    vetor[1] = 20;
    vetor[2] = 30;
    vetor[3] = 40;
    vetor[4] = 50;

    for(int i=0; i <sizeof(vetor) / 4; i++){ //retorna o tamanho do vetor em bits, por isso / 4
        cout << vetor[i] << "\n";
    }
 // ou

    for(int i=0; i <5; i++){
        cout << vetor[i] << "\n";
    }

//ou 

    int tam = 8;

    for(int i=0; i <tam; i++){
        cout << vetor[i] << "\n";
    }

    return 0;
}