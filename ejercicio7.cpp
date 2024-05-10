#include <iostream>
#include <vector>

int main() {
    int longitud;
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> longitud;

    std::vector<int> vector1(longitud);
    std::vector<int> vector2(longitud);
    std::vector<int> resultado(longitud);

    std::cout << "Ingrese los elementos del primer vector:\n";
    for (int i = 0; i < longitud; i++) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector1[i];
    }

    std::cout << "Ingrese los elementos del segundo vector:\n";
    for (int i = 0; i < longitud; i++) {
        std::cout << "Elemento " << i + 1 << ": ";
        std::cin >> vector2[i];
    }

    for (int i = 0; i < longitud; i++) {
        resultado[i] = vector1[i] + vector2[i];
    }

    std::cout << "La suma de los vectores es:\n";
    for (int i = 0; i < longitud; i++) {
        std::cout << resultado[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}