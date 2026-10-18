#pragma once
#ifndef BPA_H
#define BPA_H
#include "registro.h"
#include "utilerias.h"
#include "nombres.h"
#include "estadisticas.h"
#include "honor.h"
#include <iostream>
#include <string>


int BuscarAlumno(std::string nombre, std::string Alumnos[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (Alumnos[i] == nombre) {
            return i;
        }
    }
    return -1;
}

int imprimirBoletaPorAlumno()
{
    int tam = 6;
    std::string Nombre;

    std::cout << "Ingresa el nombre del alumno que buscas: ";
    std::getline(std::cin >> std::ws, Nombre);

    int posicion = BuscarAlumno(Nombre, Alumnos, tam);

    if (posicion != -1) {
        double mat = matematicas[posicion];
        double esp = espanol[posicion];
        double dp = disenoProgramas[posicion];

        std::cout << "Alumno: " << Alumnos[posicion] << "\n";
        std::cout << "Mate: " << mat << "\n";
        std::cout << "Espanol: " << esp << "\n";
        std::cout << "Diseno: " << dp << "\n";
    } else {
        std::cout << "Alumno no encontrado\n";
    }

    return 0;
}

#endif