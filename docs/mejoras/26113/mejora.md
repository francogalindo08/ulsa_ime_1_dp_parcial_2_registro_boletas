# Propuesta de mejora

Propuesta de mejora elaborada por: Andrés Galindo Dávila

**Matrícula:** 26113
**Título de la propuesta:** Mostrar qué materias reprobó cada alumno

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

Es una **mejora** al reporte "Materias reprobadas por alumno".

Hoy el reporte dice **cuántas** materias reprobó cada alumno, pero no **cuáles**. Para saberlo, el maestro tiene que ir a "Mostrar lista" y buscar al alumno. Con esta mejora, cada línea muestra también el nombre de las materias reprobadas.

Con los datos del ejemplo de la guía, el reporte quedaría así:

```
--- MATERIAS REPROBADAS POR ALUMNO ---
Luis: 1 materia (Matematicas)
Marta: 2 materias (Espanol, Matematicas)
Raul: 2 materias (Espanol, Diseno de Programas)
Alumnos con materias reprobadas: 3
```

Beneficia al maestro, que sabe de inmediato en qué materia necesita apoyo cada alumno, y al alumno, que puede recibir asesoría en la materia correcta.

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

- **Constante nueva `NOMBRES_MATERIAS` (en `reprobadas.h`):** un arreglo constante de tamaño `MATERIAS_POR_ALUMNO` con `"Espanol"`, `"Matematicas"` y `"Diseno de Programas"`. Así los nombres se escriben en un solo lugar. Van sin acentos ni "ñ" porque la guía lo pide para lo que imprime el programa.
- **Función nueva `agregarMateria` (en `reprobadas.h`):** recibe el texto que se lleva y el nombre de una materia, y devuelve el texto con la materia agregada. Si el texto está vacío devuelve solo el nombre; si no, agrega ", " antes. Se justifica porque esa misma lógica se necesita en las tres materias, y con una función no se repite tres veces.
- **Variable nueva `materiasReprobadas` (`std::string`) dentro del ciclo:** inicia vacía (`""`) con cada alumno, igual que el contador `reprobadas`, para que un alumno no herede las materias del anterior.
- **Función `reporteMateriasReprobadas`: cambia.** Cuando una materia se reprueba, además de sumar 1 al contador, se agrega su nombre a `materiasReprobadas`. Se aprovecha la misma revisión que ya existe, sin recorrer los arreglos otra vez.
- **Decisión múltiple: cambia.** Los casos 1 y 2 muestran las materias entre paréntesis. El caso de 3 se queda como "reprobo todas", porque ahí ya se sabe cuáles son.
- **Arreglos paralelos, menú, `main.cpp` y rechazos: no cambian.** La función recibe los mismos parámetros, así que la llamada en el menú es igual.

## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
FUNCION agregarMateria(texto, nombreMateria)                                   [NUEVO]
    SI texto = "" ENTONCES                                                      [NUEVO]
        DEVOLVER nombreMateria                                                  [NUEVO]
    SI NO                                                                       [NUEVO]
        DEVOLVER texto + ", " + nombreMateria                                   [NUEVO]
    FIN SI                                                                      [NUEVO]
FIN FUNCION                                                                     [NUEVO]

NOMBRES_MATERIAS <- ["Espanol", "Matematicas", "Diseno de Programas"]           [NUEVO]

1. SI total = 0 ENTONCES
       MOSTRAR "No hay alumnos registrados."
       TERMINAR
   FIN SI
2. MOSTRAR "--- MATERIAS REPROBADAS POR ALUMNO ---"
3. alumnosConReprobadas <- 0
4. PARA i DESDE 0 HASTA total - 1 HACER
       reprobadas <- 0
       materiasReprobadas <- ""                                                 [NUEVO]
       SI espanol[i] < CALIFICACION_APROBATORIA ENTONCES
           reprobadas <- reprobadas + 1
           materiasReprobadas <- agregarMateria(materiasReprobadas, NOMBRES_MATERIAS[0])   [NUEVO]
       FIN SI
       SI matematicas[i] < CALIFICACION_APROBATORIA ENTONCES
           reprobadas <- reprobadas + 1
           materiasReprobadas <- agregarMateria(materiasReprobadas, NOMBRES_MATERIAS[1])   [NUEVO]
       FIN SI
       SI disenoProgramas[i] < CALIFICACION_APROBATORIA ENTONCES
           reprobadas <- reprobadas + 1
           materiasReprobadas <- agregarMateria(materiasReprobadas, NOMBRES_MATERIAS[2])   [NUEVO]
       FIN SI
       SEGUN reprobadas
           1: MOSTRAR nombres[i], ": 1 materia (", materiasReprobadas, ")"      [CAMBIA]
           2: MOSTRAR nombres[i], ": 2 materias (", materiasReprobadas, ")"     [CAMBIA]
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
