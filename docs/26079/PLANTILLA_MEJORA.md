# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por: Franco Galindo

**Matrícula:** 26079
**Título de la propuesta:** Buscar alumnos por rango de promedio.

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?
mejora porque al ingresar algun promedio , por ejemplo 8, te mostraria todos los alumnos con la materia en la que sacaron esa calificacion,Permite filtrar la información sin revisar alumno por alumno.
[Inserta aquí tu respuesta]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.
Arreglos: No es necesario modificarlos, porque los arreglos actuales ya almacenan los nombres y las calificaciones de los seis alumnos.
Constantes: No es necesario agregar constantes nuevas, ya que los límites del promedio se pueden ingresar por teclado.
 Funciones: Se agregaría una nueva función llamada buscarPorRangoPromedio(), que solicitaría un promedio mínimo y máximo, calcularía el promedio de cada alumno y mostraría a quienes estén dentro del rango indicado.
 Menú: Se agregaría la opción 8, «Buscar alumnos por rango de promedio», para que el usuario pueda ejecutar esta nueva función sin afectar las siete opciones existentes.
[Inserta aquí tu respuesta]

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
Inicio.
Declarar tamaño, arreglos, materias y alumnos.
Mostrar el menú de opciones.
Seleccionar la opción 8: Buscar alumnos por rango de promedio. [NUEVO]
Solicitar el promedio mínimo y el promedio máximo. [NUEVO]
Leer los valores ingresados. [NUEVO]
Validar que el promedio mínimo sea menor o igual al máximo y que ambos estn entre 0 y 10. [NUEVO]
Recorrer el arreglo de alumnos registrados. [NUEVO]
Calcular el promedio de cada alumno usando sus calificaciones de las tres materias. [NUEVO]
Comparar el promedio de cada alumno con el rango ingresado. [NUEVO]
Imprimir el nombre y el promedio de los alumnos que estén dentro del rango. [CAMBIA]
Si ningún alumno cumple con el rango, mostrar un mensaje indicando que no se encontraron resultados. [NUEVO]
Regresar al menú principal. [NUEVO]
Fin.
```
