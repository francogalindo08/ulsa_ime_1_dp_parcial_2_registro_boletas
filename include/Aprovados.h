#ifndef APROBADOS_H
#define APROBADOS_H

#include <iostream>
#include <string>


const float NOTA_MINIMA = 7.0f;


inline bool estaAprobado(float calificacion) {
    return calificacion >= NOTA_MINIMA;
}


inline std::string obtenerEstado(float calificacion) {
    if (estaAprobado(calificacion)) {
        return "APROBADO";
    } else {
        return "REPROBADO";
    }
}

#endif 