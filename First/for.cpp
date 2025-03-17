#include <iostream>
using namespace std;

int main(){
    int x;
    for(x=0; x<20; x++){
        cout << "Victor Querino Martins - " << x << "\n";
    }

// 2 variaveis
    for(int x=0, y=0; x<20; x++, y+=2){
        cout << "Victor Querino Martins - " << x << " - " << y << "\n";
    }


    return 0;
}