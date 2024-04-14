#include <iostream>
using namespace std;

int main() {
    string alunos[4];
    alunos[0] = "João";
    alunos[1] = "Maria";
    alunos[2] = "José";
    alunos[3] = "Ana";

    for (int i = 0; i < 4; i++) {
        cout << "Aluno " << i + 1 << ": " << alunos[i] << endl;
    }
}