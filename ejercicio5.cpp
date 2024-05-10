#include <iostream>

int main() {
    int cantidadAprobados = 0;
    int cantidadReprobados = 0;
    int sumaCalificaciones = 0;
    int calificacion;
    float promedio;

    std::cout << "Ingrese las calificaciones de los estudiantes:" << std::endl;

    int contador = 1;
    while (contador <= 8) {
        std::cout << "Calificación del estudiante " << contador << ": ";
        std::cin >> calificacion;

        if (calificacion >= 70) {
            cantidadAprobados++;
        } else {
            cantidadReprobados++;
        }

        sumaCalificaciones += calificacion;
        contador++;
    }

    promedio = static_cast<float>(sumaCalificaciones) / 8;

    std::cout << "Cantidad de alumnos aprobados: " << cantidadAprobados << std::endl;
    std::cout << "Cantidad de alumnos reprobados: " << cantidadReprobados << std::endl;
    std::cout << "Promedio general del grupo: " << promedio << std::endl;

    return 0;
}