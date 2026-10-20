## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?



## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.
El menú (main.cpp): Cambia la Opción 4 del menú. En lugar de procesar los datos ahí mismo, ahora solo llama a una función externa para que todo quede más limpio.

Funciones (Aprobados.h): Agregué la función mostrarAprobadosReprobados para recorrer la lista y revisar las notas, y usé la función obtenerEstado para evaluar cada materia individualmente. Lo hice así para no amontonar código en el archivo principal y mantener el programa bien ordenado.

Arreglos y constantes: No cambiaron. Utilicé los mismos arreglos que ya teníamos (nombres, espanol, matematicas, disenoProgramas) y la variable total que controla cuántos alumnos hay registrados.



## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
1. Inicio
2. Mostrar el menú principal
3. Leer la opción ingresada por el usuario
4. Validar la opción en el menú
5. [CAMBIA] Si el usuario elige la opción 4, llamar a la función mostrarAprobadosReprobados() pasándole los arreglos y el total
6. [NUEVO] Limpiar la pantalla y mostrar el título del reporte
7. [NUEVO] Verificar si hay alumnos registrados (si total es mayor a 0)
8. [NUEVO] Recorrer la lista de alumnos desde i = 0 hasta total - 1
9. [NUEVO] Para cada alumno, evaluar cada una de sus materias (Español, Matemáticas y Diseño) usando obtenerEstado()
10. [NUEVO] Mostrar en pantalla el nombre del alumno y el resultado de cada materia (Aprobado o Reprobado)
11. [NUEVO] Esperar a que el usuario presione Enter para limpiar el teclado y regresar al menú
12. Fin
```