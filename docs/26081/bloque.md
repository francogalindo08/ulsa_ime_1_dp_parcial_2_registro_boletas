# Documentación del bloque

## 1. Autor

**Nombre:** Fatima Marisol Orozco
**Matrícula:** 26081
**Bloque y opción elegida:** Bloque individual: Estadisticas (opcion 3)
**Archivo de código:** `include/estadisticas.h`

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

Calcula el promedio del grupo en cada materia (Español, metematicas y diseño de programas) y muestra cual materia tiene el promedio mas alto y mas bajo 

Le sirve al mastro para ver de un vistazo en que materia le va mejor y peor al grupo, sin tener que sacar los promedios a mano
## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

**Recibe (parámetros):**

- nombres (const std:: string[]): Los nombres de los alumnos 
- español,  atematicas, y diseño (const double[]): las calificaciones de cada materia
- total (int): cuantos alumnos hay registrados 


**Produce (lo que imprime):**

- El título `--- ESTADISTICAS POR MATERIA ---`.
- Una línea por materia con su promedio a un decimal, por ejemplo Espanol: 7.5
-  Mas alta: <materia> y Mas baja: <materia>
- O mensaje de rechao, si la lista  esta vacia.

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

estadisticasPorMateria: Recibe los arreglos y el total, calcula los promedios y encuentra la materia mas alta y mas baja e imprime el reporte. Los arreglos llegan como const porque el reporte solo los lee, asi no cambia datos por error.

nombreMateriaEst: Recibe el numero de una materia (0,1, o 2) y devuelve su nombre. Los separe para no repetir los nombres en cada lugar que se imprimen

**¿Qué ciclo usaste y por qué ese?**

Un `for` de `0` a `total - 1`, para sumar las calificaiones, por que se cuantos alumnos hay. Uso 'total' y no el tamaño maximo del arreglo para no sumar posiciones vacias.

Un `for`de `1` a `NUM_MATERIAS_EST -1` para buscar la mas alta y la mas baja. Empieeza en 1 por que la materia 0 es el punto de partida de la comparacion.

un `for`de `0` a `NUM_MATERIAS -1`para imprimir los promedios

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

sumaEspanol, sumaMatematicas y sumaDiseno: acumulan las calificaiones de cada materia. Inician en 0.0

masAlta y masBaja : Gurdan el indice de la materia con el mejor y peor promedio. Inician en 0

**¿Dónde está tu decisión múltiple y qué casos cubre?**

Es un `switch (indice)` dentro del nombreMateriasEst:
0:devuelve Espanol 
1: devuelveMatematicas
default: devuelve diseno

**¿Qué constantes definiste y por qué son constantes?**
NUM_MATERIAS-EST = 3: El numero de materias que se evaluan. es constante porque nunca cambian minetras corre el programa

_EST: para que no choque con constantes de otros bloques al cuntar todo en main.cpp

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

-Lista vacía:
(`total == 0`): muestra `No hay alumnos registrados.` y regresa al menú con `return`. Sin esto se dividiria entre 0 al sacar el promedio

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
1- SI total= 0 ENTONCES 
    MOSTRAR "No hay alumnos registrados ."
    TERMINAR
FIN SI
2-sumaEspanol <- 0, sumaMatematicas <- 0 , sumaDiseño <- 0
3- PARA i DESDE O HASTA total -1 HACER
     sumaespanol <-  sumaespanol + espanol [i]
     sumamatematicas <- sumamatematicas + matematicas [i]
     sumadiseno <- sumadiseño + disenoProgramas [i]
FIN PARA
4- promedios [0] <- sumaespanol / total
   promedios [1] <- sumamatematicas / total
   promedios [2] <- sumadiseno / total

5- masalta <- 0 , masbaja <- 0
6- PAR m DESDE 1 HASTA NUM_MATERIAS_EST -1 HACER 
    SI promedios [m] > promedios [masalta] ENTONCES masalta <- m
    SI promedios [m] < promedios [masbaja] ENTONCES masbaja <- m
FIN PARA
7- MOSTAR "--- ESTADISTICAS POR MATERIA ---"
8- PARA m DESDE 0 HASTA NUM_MATERIAS_EST -1 HACER
     MOSTRAR nombremateria(m) y promedios [m]
FIN PARA 
9- MOSTRAR "Mas alta: " y nombremateria (masalta)
10_ MOSTRAR "Mas baja: " y nombremateria (masbaja)

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Sí, con los datos del ejemplo de la guía (Ana 9/8/10, Luis 7/6/8, Marta 6/5/7, Jorge 8/7/9, Sofia 10/9/8, Raul 5/7/6). Esperaba español 7.5 matematicas 7.0 y diseño 8.0 
con diseño como la mas alta y matematicas como la mas baja y el prgrama dio lo mismo.

Si dos materias empataban, gana la primera que aparece, porque uso < y > estrictos y no >= ni =<

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | ¿Mi bloque necesitaba el código de mis compañeros para funcionar? | No. Mi función recibe los cuatro arreglos y el total como parámetros, así que solo depende de `registro.h`. |
