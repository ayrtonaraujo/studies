#include <iostream>
using namespace std;

int main ()
{
    string nome1, nome2;
    int salario, salario2;
    
    cout << "Nome: " << endl;
    getline (cin, nome1); // mais recomendável para ler textos até a quebra de linha

    cout << "Salario: " << endl;
    cin >> salario;

    cout << "Nome 2: " << endl;
    cin.ignore(INT_MAX, '\n'); //---- limpeza do espaço em branco da entrada anterior
    getline (cin, nome2); // mais recomendável para strings

    cout << "Salario 2: " << endl;
    cin >> salario2;
    

    return 0;
}