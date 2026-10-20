#pragma once

// =====================================================
// BLOQUE: Materias reprobadas por alumno
// Responsable: Andres Galindo Davila (26113)
//
// Lista a los alumnos que reprueban al menos una materia
// y cuantas reprueba cada uno.
// =====================================================

#include <string>
#include <iostream>
#include "registro.h"

// Cantidad de materias que se evaluan por alumno.
const int MATERIAS_POR_ALUMNO = 3;

// Muestra a cada alumno con al menos una materia reprobada
// y cuantas reprobo. Al final dice cuantos alumnos son.
// Recibe: los cuatro arreglos (const porque solo se leen) y el total.
// Rechazos: lista vacia y ningun alumno con materias reprobadas.
void reporteMateriasReprobadas(const std::string nombres[],
                               const double espanol[],
                               const double matematicas[],
                               const double disenoProgramas[],
                               int total) {
    // Paso 1: rechazo por lista vacia
    if (total == 0) {
        std::cout << "No hay alumnos registrados.\n";
        return;
    }

    // Paso 2: titulo
    std::cout << "--- MATERIAS REPROBADAS POR ALUMNO ---\n";

    // Paso 3: contador general
    int alumnosConReprobadas = 0;

    // Paso 4: revisar a cada alumno
    for (int i = 0; i < total; i++) {
        int reprobadas = 0;

        if (espanol[i] < CALIFICACION_APROBATORIA) {
            reprobadas++;
        }
        if (matematicas[i] < CALIFICACION_APROBATORIA) {
            reprobadas++;
        }
        if (disenoProgramas[i] < CALIFICACION_APROBATORIA) {
            reprobadas++;
        }

        switch (reprobadas) {
            case 1:
                std::cout << nombres[i] << ": 1 materia\n";
                break;
            case 2:
                std::cout << nombres[i] << ": 2 materias\n";
                break;
            case MATERIAS_POR_ALUMNO:
                std::cout << nombres[i] << ": " << MATERIAS_POR_ALUMNO
                          << " materias (reprobo todas)\n";
                break;
            default:
                // 0 reprobadas: no se muestra
                break;
        }

        if (reprobadas > 0) {
            alumnosConReprobadas++;
        }
    }

    // Paso 5: total o rechazo propio
    if (alumnosConReprobadas == 0) {
        std::cout << "Ningun alumno tiene materias reprobadas.\n";
    } else {
        std::cout << "Alumnos con materias reprobadas: "
                  << alumnosConReprobadas << "\n";
    }
}
