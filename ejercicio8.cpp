#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Ingrese la longitud de los vectores: ";
    std::cin >> n;

    std::vector<int> vector1(n);
    std::vector<int> vector2(n);

    std::cout << "Ingrese los elementos del primer vector: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vector1[i];
    }

    std::cout << "Ingrese los elementos del segundo vector: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vector2[i];
    }

    int productoPunto = 0;
    int i = 0;
    while (i < n) {
        productoPunto += vector1[i] * vector2[i];
        i++;
    }

    std::cout << "El producto punto de los vectores es: " << productoPunto << std::endl;

    return 0;
}