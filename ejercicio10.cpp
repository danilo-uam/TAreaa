#include <iostream>
#include <vector>

using namespace std;

int main() {
    int filas, columnas;
    
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;
    
    vector<vector<int>> matriz(filas, vector<int>(columnas));
    
    cout << "Ingrese los elementos de la matriz:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }
    
    vector<vector<int>> matrizTranspuesta(columnas, vector<int>(filas));
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }
    
    cout << "La matriz transpuesta es:\n";
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}