#include <iostream>
using namespace std;

int main() {
    const int tamanho = 15;
    int vetor[tamanho];

    // Lendo os números no vetor
    cout << "Digite 15 números inteiros: " << endl;
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }

    // Exibindo apenas os números positivos
    cout << "Números positivos no vetor: ";
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > 0) {
            cout << vetor[i] << " ";
        }
    }
    cout << endl;

    return 0;
}