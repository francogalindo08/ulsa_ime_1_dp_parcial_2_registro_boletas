# Documentación del bloque

## 1. Autor

**Nombre:** Andrés Galindo Dávila
**Matrícula:** 26113
**Bloque y opción elegida:** Bloque individual: Materias reprobadas por alumno (opción 6 del menú)
**Archivo de código:** `include/reprobadas.h`

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

[Inserta aquí tu respuesta]

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

[Inserta aquí tu respuesta]

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

[Inserta aquí tu respuesta]

**¿Qué ciclo usaste y por qué ese?**

[Inserta aquí tu respuesta]

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

[Inserta aquí tu respuesta]

**¿Dónde está tu decisión múltiple y qué casos cubre?**

[Inserta aquí tu respuesta]

**¿Qué constantes definiste y por qué son constantes?**

[Inserta aquí tu respuesta]

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

[Inserta aquí tu respuesta]

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

[Inserta aquí tu respuesta]

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 2 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
| 3 | [Inserta aquí tu respuesta] | [Inserta aquí tu respuesta] |
