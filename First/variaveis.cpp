#include <iostream>

using namespace std;

int main(){

    int vidas = 0;
    double peso = 70.532;
    float altura = 1.75;
    char sexo = 'M';
    //char letras[20]; //vetor de caracteres
    bool vivo = true; //ou false
    string nome = "Victor";

    cout << "Vidas: " << vidas << "\n";
    cout << "Peso: " << peso << "\n";
    cout << "Altura: " << altura << "\n";
    cout << "Sexo: " << sexo << "\n";
    cout << "Nome: " << nome << "\n";
    cout << "Vivo: " << vivo << "\n";

    system("pause");

    
    cout << "\n Digite o numero de vidas:  ";
    cin >> vidas;       //cin = console in = scanf
    cout << "Digite o peso:  ";
    cin >> peso;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << "Digite seu sexo (M ou F): ";
    cin >> sexo;
    cout << "Digite seu nome: ";
    cin >> nome;
    cout << "Digite se esta vivo (1 ou 0): ";
    cin >> vivo;
    cout << "\n";


    cout << "Vidas: " << vidas << "\n" << "Peso: " << peso << "\n" << "Altura: " << altura << "\n"<< "Sexo: " << sexo << "\n" << "Nome: " << nome << "\n" << "Vivo: " << vivo << "\n";

    return 0;
}