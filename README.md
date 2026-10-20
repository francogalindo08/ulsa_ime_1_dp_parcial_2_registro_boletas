# Proyecto Parcial 2: Sistema de Registro y Boletas de un Grupo Escolar

> **Importante:** este README es del equipo y debe tener aportaciones de todos los integrantes. La guía completa está en [`PROYECTO.md`](PROYECTO.md).

## 1. Integrantes

| Bloque | Matrícula | Nombre | Usuario de GitHub | Opción elegida |
| --- | --- | --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] |Matias Borrego | matiasborregoflores012 | Captura |
| 2 | [Inserta aquí tu respuesta] | Romeo Ramos| romeoramos-ctrl | lista de alumnos  |
| 3 | [Inserta aquí tu respuesta] | Fatima orozco | fatimaorz | estadisticas por materia|
| 4 | [Inserta aquí tu respuesta] | Diego Serrano | diegoserrano0103 | aprobados y reprobados |
| 5 |26079 | Franco galindo| francogalindo08| boleta por alumno
| 6 | [Inserta aquí tu respuesta] | Andrés Galindo | andresgalindod-rgb | materias reprobadas por alumno|
<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 2. Opciones del menú

Escriban las opciones del menú en el orden en que aparecen en el programa.

1. Capturar alumno
2. Mostrar lista
3. Estadisticas por materia
4. Aprobados y reprobados
5. Boleta individual
6. Materias reprobadas por alumno
7. Salir

## 3. Cómo compilar y ejecutar

Desde la carpeta del proyecto:

```
g++ -Wall -Wextra -std=c++17 -Iinclude src/main.cpp -o boletas
./boletas
```

## 4. Reglas del programa
 
[- El programa muestra un menú de 7 opciones y se repite hasta que se elige 7 (Salir). Cualquier otro número muestra "Opcion invalida." y regresa al menú.
- Los datos se guardan en 4 arreglos paralelos (nombres, español, matemáticas y diseño de programas), declarados dentro de main, sin variables globales. La variable total cuenta los alumnos registrados y la capacidad máxima es MAX_ALUMNOS.
- Cada alumno tiene 3 calificaciones: Español, Matemáticas y Diseño de Programas.
- Una materia se considera aprobada si la calificación es mayor o igual a 7.0 (CALIFICACION_APROBATORIA, de registro.h). Un 7.0 cuenta como aprobado.
- El promedio individual del alumno (opción 4) es la suma de sus 3 calificaciones entre 3.
- El estado de aprobado o reprobado de la opción 4 lo decide obtenerEstado(promedio). [CONFIRMAR el mínimo en BPA.h]
- La boleta individual (opción 5) busca el nombre con BuscarAlumno, que devuelve la posición o -1. Si devuelve -1 muestra "Alumno no encontrado." 
- En las estadísticas, si dos materias empatan en el promedio más alto o más bajo, gana la primera en el orden Español, Matemáticas, Diseño de Programas.
- Si no hay alumnos registrados (total = 0): estadísticas y materias reprobadas muestran "No hay alumnos registrados."; la opción 4 no lista a nadie; la boleta individual muestra "Alumno no encontrado."
- Las estadísticas imprimen los promedios con 1 decimal.]

## 5. Datos del escenario

Los 6 alumnos que capturan en el escenario obligatorio.

| # | Nombre | Español | Matemáticas | Diseño de Programas |
| --- | --- | --- | --- | --- |
| 1 | [ANA] | [9] | [7] | [10] |
| 2 | [LUIS] | [7] | [6] | [8] |
| 3 | [MARTA] | [6] | [5] | [7] |
| 4 | [JORGE] | [8] | [7] | [9] |
| 5 | [SOFIA] | [10] | [9] | [8] |
| 6 | [RAUL] | [5] | [7] | [6] |

## 6. Cálculo a mano

Predigan la salida del escenario antes de ejecutarlo. Una fila por bloque individual. Lo que imprime el programa debe coincidir.

| Bloque | Valores elegidos | Resultado esperado |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 4 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 5 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

**¿La salida del programa coincidió con el cálculo a mano? Si no, ¿qué corrigieron?**

[Inserta aquí tu respuesta]

## 7. Receta del menú

Receta en pseudocódigo del programa principal: el menú y cómo se conecta con cada bloque.

```
[INICIO
    declarar nombres[MAX_ALUMNOS]
    declarar espanol[MAX_ALUMNOS]
    declarar matematicas[MAX_ALUMNOS]
    declarar disenoProgramas[MAX_ALUMNOS]
    total = 0
    OPCION_SALIR = 7

    REPETIR
        mostrar menu:
            1. Capturar alumno
            2. Mostrar lista
            3. Estadisticas por materia
            4. Reporte del companero
            5. Reporte del companero
            6. Reporte del companero
            7. Salir

        opcion = leerEntero("Opcion: ")

        SEGUN opcion
            caso 1:
                ejecutar reporte 1
            caso 2:
                ejecutar reporte 2
            caso 3:
                ejecutar reporte 3
            caso 4:
                ejecutar reporte 4
            caso 5:
                ejecutar reporte 5
            caso 6:
                ejecutar reporte 6
            caso 7:
                mostrar "Hasta luego."
            otro caso:
                mostrar "Opcion invalida."
    HASTA QUE opcion == OPCION_SALIR
FIN]
```

## 8. Documentación individual

Enlace a la documentación y a la propuesta de mejora de cada integrante.

| Bloque | Documentación | Propuesta de mejora |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 4 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 5 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |

<!-- Si el equipo es de seis integrantes, agreguen una fila para el bloque 6. -->

## 9. Cambios a la interfaz

Si cambiaron algo de la interfaz de `include/registro.h` (una constante, un parámetro, una función), expliquen qué cambiaron y por qué. Si no cambiaron nada, escriban "Sin cambios".

[Inserta aquí tu respuesta]
