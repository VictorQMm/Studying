#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {
    int n;
    
    cout << "Quantos termos da sequencia de Fibonacci deseja ver? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }

    return 0;
}


int fibonacci(int n){
    if(n <= 1){
        return n;
    }else{
        return  fibonacci(n -1) + fibonacci(n - 2);
    }

}