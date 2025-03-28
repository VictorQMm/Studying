#include <iostream>

using namespace std;

void imp(string txt=""); // omissão de argumentos e padrões  

int main(){
imp();

return 0;
}


void imp(string txt){
    cout << "\n" << txt << "\n";
}
