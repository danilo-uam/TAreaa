#include <iostream>
#include <string>

int main() {
    int contador = 1;
    float sumaNotas = 0;
    
    while (contador <= 10) {
        float nota;
        std::cout << "Ingrese la nota del estudiante " << contador << ": ";
        std::cin >> nota;
        
        sumaNotas += nota;
        contador++;
    }
    
    float promedio = sumaNotas / 10;
    
    std::string enEspañol;
    
    if (promedio >= 90) {
        enEspañol = "Excelente";
    } else if (promedio >= 80) {
        enEspañol = "Muy bueno";
    } else if (promedio >= 70) {
        enEspañol = "Bueno";
    } else if (promedio >= 60) {
        enEspañol = "Regular";
    } else {
        enEspañol = "Deficiente";
    }
    
    std::cout << "El promedio general de la sección es: " << promedio << std::endl;
    std::cout << "En español, el promedio se clasifica como: " << enEspañol << std::endl;
    
    return 0;
}