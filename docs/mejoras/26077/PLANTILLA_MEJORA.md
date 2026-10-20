# Propuesta de mejora

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/mejoras/<matrícula>/mejora.md (por ejemplo, docs/mejoras/123456/mejora.md)
y llena tu copia.

La propuesta es solo diseño: no se programa.
Puede tocar cualquier parte de la solución del equipo y se resuelve con los temas del parcial.
Dentro de un equipo no puede haber dos propuestas iguales.
-->

Propuesta de mejora elaborada por:Matias Borrego

**Matrícula:** 26077
**Título de la propuesta:** Prevención de registros duplicados

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?
Es una mejora.

La mejora consiste en evitar que se registren alumnos con nombres duplicados. Antes de guardar un nuevo alumno, el sistema podría verificar si el nombre ya existe dentro del arreglo de alumnos.

Problema que resuelve: evita registros repetidos que pueden provocar información duplicada y errores en los reportes del sistema.

Qué agrega: una validación adicional para comprobar que cada alumno se registre una sola vez.

A quién beneficia: beneficia a la persona encargada de capturar los datos, ya que ayuda a mantener la información organizada y reduce errores en listas, boletas, estadísticas y cuadros de honor.

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.
Funciones:
 Se modificaría la función RegistrarAlumno() para que, antes de guardar un nuevo nombre, recorra el arreglo de alumnos y verifique si ese nombre ya existe. Este cambio es necesario para evitar registros duplicados.

 Arreglos:
 No es necesario modificar los arreglos. Se sigue utilizando el arreglo alumnos[], pero ahora se consulta antes de almacenar un nuevo nombre.

 Constantes:
 No es necesario agregar ni modificar constantes, ya que la validación puede realizarse utilizando los datos que ya existen en el programa.

Menú:
 No es necesario modificar el menú, porque la mejora ocurre internamente durante el proceso de captura de alumnos y el usuario sigue utilizando la misma opción de registro.

Justificación:
 La mejora agrega una validación que evita almacenar información repetida, manteniendo los datos más organizados y reduciendo errores en los reportes generados por los demás módulos del sistema.

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

INICIO

Si la cantidad de alumnos registrados es igual al máximo permitido
    Mostrar mensaje "La lista está llena"
    Terminar función
FinSi

Mostrar título "CAPTURA ALUMNOS"

Pedir nombre del alumno

[NUEVO] Para cada alumno ya registrado
[NUEVO]     Si el nombre capturado es igual a un nombre existente
[NUEVO]         Mostrar mensaje "El alumno ya está registrado"
[NUEVO]         Terminar función
[NUEVO]     FinSi
[NUEVO] FinPara

[CAMBIA] Guardar nombre del alumno únicamente si no existe previamente

Para cada materia (Español, Matemáticas y Diseño de Programas)

    Pedir calificación

    Si la calificación es menor que 0 o mayor que 10
        Mostrar mensaje "Solo acepta números de entre 0 y 10"
        Terminar función
    FinSi

FinPara

Aumentar contador de alumnos registrados

Mostrar mensaje "Alumno registrado"

FIN
