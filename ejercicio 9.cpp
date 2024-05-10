#include <iostream>
using namespace std;

int main() {
    int filas1, columnas1, filas2, columnas2;

    cout << "Ingrese el número de filas de la primera matriz: ";
    cin >> filas1;
    cout << "Ingrese el número de columnas de la primera matriz: ";
    cin >> columnas1;

    cout << "Ingrese el número de filas de la segunda matriz: ";
    cin >> filas2;
    cout << "Ingrese el número de columnas de la segunda matriz: ";
    cin >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las dimensiones de las matrices no son compatibles para la multiplicación." << endl;
        return 0;
    }

    int matriz1[filas1][columnas1];
    int matriz2[filas2][columnas2];
    int matrizResultado[filas1][columnas2];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas1; j++) {
            cin >> matriz1[i][j];
        }
    }

    cout << "Ingrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < filas2; i++) {
        for (int j = 0; j < columnas2; j++) {
            cin >> matriz2[i][j];
        }
    }

    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            matrizResultado[i][j] = 0;
        }
    }

    int i = 0;
    while (i < filas1) {
        int j = 0;
        while (j < columnas2) {
            int k = 0;
            while (k < columnas1) {
                matrizResultado[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    cout << "La matriz resultante es:" << endl;
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}