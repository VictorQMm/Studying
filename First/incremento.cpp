#include<iostream>

using namespace std;

int main(){
    int n1,n2;

    n1 = 0;
    n2 = 10;

    cout << "Antes do incremento e decremento \n";
    cout << "n1: " << n1 << "\n";
    cout << "n2: " << n2 << "\n";

    n1++; // n1 = n1 + 1
    n2--; // n2 = n2 - 1

    cout << "\nDepois do incremento e decremento \n";
    cout << "n1: " << n1 << "\n";
    cout << "n2: " << n2 << "\n";

    n1+=2; // n1 = n1 + 2
    n2-=3; // n2 = n2 - 3
    n1*=2; // n1 = n1 * 2
    n2/=2; // n2 = n2 / 2

    

    return 0;
}