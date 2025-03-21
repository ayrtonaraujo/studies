#include <iostream>
using namespace std;

#define QTD_ALUNOS 10


int main () {

    int alunos[QTD_ALUNOS] = {};

    for (int i = 0; i < QTD_ALUNOS; i++) {
        cout << "Insira o nome do aluno " << i + 1 <<":";
        cin >> alunos[i];

    }

    for (int j = 0; j < QTD_ALUNOS; j++) {
        cout << alunos[j] << endl;
    }

    return 0;
}