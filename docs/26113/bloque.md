# Documentación del bloque

## 1. Autor

**Nombre:** Andrés Galindo Dávila
**Matrícula:** 26113
**Bloque y opción elegida:** Bloque individual: Materias reprobadas por alumno (opción 6 del menú)
**Archivo de código:** `include/reprobadas.h`

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

Muestra a los alumnos que reprobaron al menos una materia (calificación menor a 7.0) y cuántas reprobó cada uno. Al final dice cuántos alumnos tienen materias reprobadas.

Le sirve al maestro para identificar rápido qué alumnos necesitan apoyo, sin tener que revisar la lista alumno por alumno.

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

**Recibe (parámetros):**

- `nombres` (`const std::string[]`): los nombres de los alumnos.
- `espanol`, `matematicas` y `disenoProgramas` (`const double[]`): las calificaciones de cada materia.
- `total` (`int`): cuántos alumnos hay registrados.



**Produce (lo que imprime):**

- El título `--- MATERIAS REPROBADAS POR ALUMNO ---`.
- Una línea por cada alumno con al menos una materia reprobada, por ejemplo `Marta: 2 materias`.
- El total, por ejemplo `Alumnos con materias reprobadas: 3`.
- O un mensaje de rechazo, si la lista está vacía o si nadie reprobó.



## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

Una sola: `reporteMateriasReprobadas`. Recibe los cuatro arreglos y el total, cuenta las materias reprobadas de cada alumno e imprime el reporte. Los arreglos llegan como `const` porque el reporte solo los lee; así no puede cambiar los datos por error.

**¿Qué ciclo usaste y por qué ese?**

Un `for` de `0` a `total - 1`, porque sé exactamente cuántas vueltas dar: una por cada alumno registrado. Uso `total` y no `MAX_ALUMNOS` para no revisar posiciones vacías de los arreglos.

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

- `reprobadas`: cuenta las materias reprobadas del alumno actual. Inicia en 0 y se declara dentro del `for`, así que vuelve a 0 con cada alumno.
- `alumnosConReprobadas`: cuenta cuántos alumnos tienen al menos una materia reprobada. Inicia en 0 antes del ciclo.

**¿Dónde está tu decisión múltiple y qué casos cubre?**

Es un `switch (reprobadas)` dentro del ciclo:

- `1`: muestra `Nombre: 1 materia`.
- `2`: muestra `Nombre: 2 materias`.
- `MATERIAS_POR_ALUMNO` (3): muestra `Nombre: 3 materias (reprobo todas)`.
- `default` (0 reprobadas): no muestra nada, porque el alumno aprobó todo.

**¿Qué constantes definiste y por qué son constantes?**

`MATERIAS_POR_ALUMNO = 3`: el número de materias que se evalúan por alumno. Es constante porque nunca cambia mientras corre el programa, y con nombre se entiende mejor que un 3 suelto.

También uso `CALIFICACION_APROBATORIA` de `registro.h` en lugar de escribir 7.0. Si el mínimo cambiara, mi bloque se ajustaría solo.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

- **Lista vacía** (`total == 0`): muestra `No hay alumnos registrados.` y regresa al menú con `return`.
- **Rechazo propio, nadie reprobó:** muestra `Ningun alumno tiene materias reprobadas.` en lugar de un total en 0.

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
1. SI total = 0 ENTONCES
       MOSTRAR "No hay alumnos registrados."
       TERMINAR
   FIN SI
2. MOSTRAR "--- MATERIAS REPROBADAS POR ALUMNO ---"
3. alumnosConReprobadas <- 0
4. PARA i DESDE 0 HASTA total - 1 HACER
       reprobadas <- 0
       SI espanol[i] < CALIFICACION_APROBATORIA ENTONCES reprobadas <- reprobadas + 1
       SI matematicas[i] < CALIFICACION_APROBATORIA ENTONCES reprobadas <- reprobadas + 1
       SI disenoProgramas[i] < CALIFICACION_APROBATORIA ENTONCES reprobadas <- reprobadas + 1
       SEGUN reprobadas
           1: MOSTRAR nombres[i], ": 1 materia"
           2: MOSTRAR nombres[i], ": 2 materias"
           MATERIAS_POR_ALUMNO: MOSTRAR nombres[i], ": 3 materias (reprobo todas)"
           OTRO: (0 reprobadas) no se muestra nada
       FIN SEGUN
       SI reprobadas > 0 ENTONCES alumnosConReprobadas <- alumnosConReprobadas + 1
   FIN PARA
5. SI alumnosConReprobadas = 0 ENTONCES
       MOSTRAR "Ningun alumno tiene materias reprobadas."
   SI NO
       MOSTRAR "Alumnos con materias reprobadas: ", alumnosConReprobadas
   FIN SI
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Sí, con los datos del ejemplo de la guía (Ana 9/8/10, Luis 7/6/8, Marta 6/5/7, Jorge 8/7/9, Sofia 10/9/8, Raul 5/7/6). Esperaba Luis 1, Marta 2 y Raul 2, con 3 alumnos en total, y el programa dio lo mismo.

Al probarla revisé que Luis tiene 7.0 en Español y debe contar como aprobada, por eso la comparación es `<` y no `<=`. También agregué a la receta el caso `OTRO` del `SEGUN`, porque no estaba claro qué pasaba con los alumnos que aprueban todo.

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | ¿Mi bloque necesitaba el código de mis compañeros para funcionar? | No. Mi función recibe los cuatro arreglos y el total como parámetros, así que solo depende de `registro.h`. |
| 2 | En la receta usé el nombre `NUM_MATERIAS`, que podía chocar con constantes de otros bloques al juntar todos los `.h` en `main.cpp` (`honor.h` usa `NUMERO_MATERIAS` y `estadisticas.h` usa `NUM_MATERIAS_EST`). | Le puse un nombre más específico: `MATERIAS_POR_ALUMNO`. |
| 3 | Hice la receta y el código en un solo commit por accidente, y luego GitHub Desktop no me dejaba hacer push porque había commits nuevos de mis compañeros. | Deshice el commit con Undo commit y lo separé en dos (primero la receta). Para el push hice Fetch y Pull antes de subir. |
