#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
    if (argc > 1) {
        if (!strcmp(argv[1], "sol") == 0) {
            cout << "Vou ao clube.\n\n";
        } else if (!strcmp(argv[1], "nublado") == 0) {
            cout << "Vou ao cinema.\n\n";
        } else {
            cout << "Vou ficar em casa.\n\n";
        }
    } else {
        cout << "Nenhuma condicao informada.\n";
    }

    return 0;
}
