#include <iostream>
using namespace std;

int main() {
    float P1, P2, media_aprovacao = 5.0;

    // Entrada da primeira nota
    cout << "Digite a nota da P1: ";
    cin >> P1;

    // Cálculo de quanto precisa tirar na P2 para ser aprovado
    // Fórmula: (P1 + 2 * P2) / 3 >= 5
    // Isolando P2: P2 >= (3 * media_aprovacao - P1) / 2
    P2 = (3 * media_aprovacao - P1) / 2;

    // Exibição do resultado
    if (P2 <= 10) {
        cout << "O aluno precisa tirar pelo menos " << P2 << " na P2 para ser aprovado." << endl;
    } else {
        cout << "Mesmo tirando 10 na P2, nao sera possivel ser aprovado." << endl;
    }

    return 0;
}
