#include <iostream>

int main() {
    int num = 99; // Comenzamos en 99, el número impar más grande entre 1 y 100

    while (num >= 1) {
        std::cout << num << " ";
        num -= 2; // Restamos 2 para obtener el siguiente número impar
    }

    return 0;
}