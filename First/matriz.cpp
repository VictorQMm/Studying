#include <iostream>
using namespace std;

int main(){
    int matriz[3][4];

    matriz[0][0] = 5;
    matriz[0][1] = 10;
    matriz[1][3] = 15;

    for(int i=0; i <3; i++){
        for(int j=0; j <4; j++){
            cout << "Preencha a matriz = ";
            cin >> matriz[i][j];
        }
    }

    for(int i=0; i <3; i++){
        for(int j=0; j <4; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;   
}