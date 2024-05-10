#include <iostream>

int main() {
    int i = 1;
    int sum = 0;

    while (i <= 100) {
        sum += i * i;
        i++;
    }

    std::cout << "La suma de los cuadrados de los números entre 1 y 100 es: " << sum << std::endl;

    return 0;
}