# Propuesta de mejora
Propuesta de mejora elaborada por: [Fatima marisol Orozco]

**Matrícula:** [26081]
**Título de la propuesta:** [Graficas en taxto para comparar promedios de materias]

## 1. Impacto

¿Es una mejora o una corrección? ¿Qué problema resuelve o qué agrega, y a quién beneficia?

[Es una mejora.El bloque de estadisticas muestra los promedios como numeros sutos y hay que leerlos y compararlos uno por uno para saber que materia va mejor

La mejora dibuja una grafica de barras con simbolos # directamente de la consola, donde el largo de cada barra depende del promedio de la materia. Beneficia al amestro, que ve de un vistazo y sin cacular que materias estan arriba y cuales abajo, tambien cualquiera que revise el programa, porque el reporte se entiende de forma visual sin necesidad de librerias graficas. ]

## 2. Qué implica en el diseño

¿Qué partes de la solución cambian (arreglos, constantes, funciones, menú)? Justifica cada cambio.

[
-Constantes nuevas:

-CARACTERES_POR_PUNTO = 2: cuántos # vale cada punto de calificación (un promedio de 8.0 dibuja 16). Es constante para poder cambiar la escala de la gráfica en un solo lugar. 

- ANCHO_NOMBRE = 20: el espacio reservado para el nombre de la materia, para que todas las barras empiecen alineadas. Es 20 porque el nombre más largo, Diseno de Programas, tiene 19 letras.


-Funciones nuevas: barraPromedio(double promedio) recibe un promedio y devuelve un std::string con la cantidad de # que le corresponde (promedio * CARACTERES_POR_PUNTO, redondeado). La separé para que el ciclo de impresión quede corto y para poder cambiar el estilo de la barra sin tocar el reporte.

-Arreglos: no se agregan. Se reutiliza el arreglo promedios que ya existe.

-Cálculos: no cambian. Las sumas, los promedios y la búsqueda de la materia más alta y más baja siguen igual.

-Salida: cada línea de materia pasa de Espanol: 7.5 a una línea con barra, por ejemplo "Espanol| ###############  7.5". Las líneas Mas alta y Mas baja se conservan.

-Parámetros y firma: estadisticasPorMateria no cambia de firma, así que main.cpp y los demás bloques no se tocan. 

-Menú: no cambia.

-Casos de rechazo: se conserva total == 0. Un promedio de 0 dibuja una barra vacía, sin errores.


EJEMPLO DE SALIDA:
--- ESTADISTICAS POR MATERIA ---
Espanol              | ###############  7.5
Matematicas          | ##############  7.0
Diseno de Programas  | ################  8.0
Mas alta: Diseno de Programas
Mas baja: Matematicas
]


## 3. Receta

Receta en pseudocódigo de la solución con tu propuesta. Marca cada paso nuevo con `[NUEVO]` y cada paso que cambia con `[CAMBIA]`. Los pasos sin marca son los que ya existen.

```
[[NUEVO] CONSTANTES CARACTERES_POR_PUNTO <- 2, ANCHO_NOMBRE <- 20

[NUEVO] FUNCION barraPromedio(promedio)
            longitud <- REDONDEAR(promedio * CARACTERES_POR_PUNTO)
            barra <- cadena vacía
            PARA k DESDE 1 HASTA longitud HACER
                barra <- barra + "#"
            FIN PARA
            DEVOLVER barra
        FIN FUNCION

1. SI total = 0 ENTONCES
       MOSTRAR "No hay alumnos registrados."
       TERMINAR
   FIN SI
2. sumaEspanol <- 0, sumaMatematicas <- 0, sumaDiseno <- 0
3. PARA i DESDE 0 HASTA total - 1 HACER
       sumaEspanol <- sumaEspanol + espanol[i]
       sumaMatematicas <- sumaMatematicas + matematicas[i]
       sumaDiseno <- sumaDiseno + disenoProgramas[i]
   FIN PARA
4. promedios[0] <- sumaEspanol / total
   promedios[1] <- sumaMatematicas / total
   promedios[2] <- sumaDiseno / total
5. masAlta <- 0, masBaja <- 0
6. PARA m DESDE 1 HASTA NUM_MATERIAS_EST - 1 HACER
       SI promedios[m] > promedios[masAlta] ENTONCES masAlta <- m
       SI promedios[m] < promedios[masBaja] ENTONCES masBaja <- m
   FIN PARA
7. MOSTRAR "--- ESTADISTICAS POR MATERIA ---"
8. PARA m DESDE 0 HASTA NUM_MATERIAS_EST - 1 HACER
       [CAMBIA] MOSTRAR nombreMateria(m) alineado a ANCHO_NOMBRE,
                        " | ", [NUEVO] barraPromedio(promedios[m]),
                        "  ", promedios[m]
   FIN PARA
9. MOSTRAR "Mas alta: " y nombreMateria(masAlta)
10. MOSTRAR "Mas baja: " y nombreMateria(masBaja)]
```
