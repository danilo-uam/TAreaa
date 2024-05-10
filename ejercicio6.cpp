#include <iostream>

int main() {
    int sum = 0;
    int num = 100;

    while (num <= 200) {
        if (num % 2 == 0) {
            sum += num;
        }
        num++;
    }

    std::cout << "La suma de los números pares entre 100 y 200 es: " << sum << std::endl;

    return 0;
}