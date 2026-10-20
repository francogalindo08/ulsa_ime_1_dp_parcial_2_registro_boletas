#ifndef APROBADOS_H
#define APROBADOS_H

#include <iostream>
#include <string>

// Función individual para evaluar cada calificación (materia o promedio)
inline std::string obtenerEstado(double calificacion) {
    // Si tus notas son de 1 a 10, pon 7.0 (o 6.0 según la calificación mínima aprobatoria).
    // Si tus notas son de 0 a 100, cámbialo a 70.0.
    if (calificacion >= 7.0) {
        return "APROBADO";
    } else {
        return "REPROBADO";
    }
}

// Función principal que procesa todo y muestra el estado por cada materia
inline void mostrarAprobadosReprobados(std::string nombres[], double espanol[], double matematicas[], double disenoProgramas[], int total) {
    system("cls");
    std::cout << "\n===== ESTADO DE MATERIAS POR ALUMNO =====\n\n";

    if (total == 0) {
        std::cout << "No hay alumnos registrados en el sistema.\n";
    } else {
        for (int i = 0; i < total; i++) {
            std::cout << "Alumno: " << nombres[i] << std::endl;
            std::cout << "  - Español (" << espanol[i] << "): " 
                      << obtenerEstado(espanol[i]) << std::endl;
            std::cout << "  - Matemáticas (" << matematicas[i] << "): " 
                      << obtenerEstado(matematicas[i]) << std::endl;
            std::cout << "  - Diseño de Programas (" << disenoProgramas[i] << "): " 
                      << obtenerEstado(disenoProgramas[i]) << std::endl;
            std::cout << "-----------------------------------" << std::endl;
        }
    }

   std::cout << "\nPresione Enter para continuar...";
std::cin.ignore();
std::cin.get();
}

#endif