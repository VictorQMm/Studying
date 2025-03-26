#include <iostream>

using namespace std;

void imp(string txt="");

int main(){
// omissão de argumentos e padrões  
imp();

return 0;
}


void imp(string txt){
    cout << "\n" << txt << "\n";
}
