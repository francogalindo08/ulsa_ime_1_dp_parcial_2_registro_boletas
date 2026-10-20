# Documentación del bloque

## 1. Autor

**Nombre:** Matias Borrego
**Matrícula:** 26077
**Bloque y opción elegida:** Bloque individual: Captura de alumnos 
**Archivo de código:** `include/nombres.h`

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?

Mi bloque se encarga de registrar alumnos y capturar sus calificaciones en Español, Matemáticas y Diseño de Programas.

La función solicita el nombre del alumno y sus tres calificaciones, valida que las calificaciones estén entre 0 y 10, y guarda toda la información en los arreglos del programa.

al usuario porque permite almacenar la información necesaria de cada alumno para que después otros módulos del sistema puedan utilizar esos datos,
## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

**Recibe (parámetros):**

- std::string alumnos[] → arreglo donde se guardan los nombres de los alumnos.
- double esp[] → arreglo con las calificaciones de Español.
- double mat[] → arreglo con las calificaciones de Matemáticas.
- double dp[] → arreglo con las calificaciones de Diseño de Programas.
- int &total → contador de alumnos registrados.


**Produce (lo que imprime):**

- El título `--- CAPTURA ALUMNOS ---`.
-  El mensaje `Alumno X registrado.` cuando el registro es exitoso.
- El mensaje `La lista está llena (6 alumnos).` cuando ya no hay espacio para más alumnos.
- El mensaje `Solo acepta números de entre 0 y 10.` cuando se captura una calificación inválida


## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**

- `RegistrarAlumno()`captura el alumno, captura las calificaciones de Español, Matemáticas y Diseño de Programas.
- `leerCadena()`Solicita un texto al usuario, Permite escribir nombres con espacios, Devuelve el texto capturado.
- `leerDecimal()`Solicita una calificación numérica, convierte la entrada a tipo double.

**¿Qué ciclo usaste y por qué ese?**

- for (int i = 0; i < NUM_MATERIAS; i++)

- Utilicé un ciclo for porque conozco la cantidad exacta de repeticiones que necesita el programa (3 materias). Me permite capturar las calificaciones de forma ordenada y evitar repetir código.

**¿Qué acumuladores o contadores usaste y con qué valor inician?**

- Utilicé el contador total, que almacena la cantidad de alumnos registrados en el sistema.
- int i = 0;

- Cada vez que se registra correctamente un alumno, el contador aumenta en uno:
- i++;

**¿Dónde está tu decisión múltiple y qué casos cubre?**

- La decisión se encuentra en las validaciones de la función RegistrarAlumno.
- if (total >= MAX_ALUMNOS) {
    std::cout << "La lista está llena (6 alumnos).\n";
    return;
}
- cubre 2 casos:
- Si ya se registraron 6 alumnos, se muestra un mensaje de error y no se permite registrar más.
- Si todavía hay espacio disponible, continúa el proceso de captura.

- También se utiliza otra decisión para validar las calificaciones

- if (*califs[i] < 0 || *califs[i] > 10) {
    std::cout << "Solo acepta números de entre 0 a 10.\n";
    return;
}

- Esta decisión cubre dos casos:
- Si la calificación está fuera del rango de 0 a 10, el registro se rechaza y se muestra un mensaje.
- Si la calificación es válida, se guarda en el arreglo correspondiente.


**¿Qué constantes definiste y por qué son constantes?**

- `const int NUM_MATERIAS = 3;`
- Es una constante porque ese valor no cambia durante la ejecución del programa. Además, permite que el código sea más fácil de modificar y entender.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**
- if (total >= MAX_ALUMNOS)
- La lista está llena (6 alumnos).

- if (*califs[i] < 0 || *califs[i] > 10)
- Solo acepta números de entre 0 a 10.


## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

INICIO

Si la cantidad de alumnos registrados es igual al máximo permitido
    Mostrar mensaje "La lista está llena"
    Terminar función
FinSi

Mostrar título "CAPTURA ALUMNOS"

Pedir nombre del alumno

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

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Sí, probé la receta a mano utilizando nombres y calificaciones de ejemplo para verificar que los datos se guardaran correctamente en los arreglos.


## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | El compilador no reconocía RegistrarAlumno. | Revisé que el nombre de la función fuera igual en nombres.h, y main.cpp |
| 2 | Los nombres con espacios no se guardaban completos.| Cambié cin por la función leerCadena() |
| 3 | Apareció un error de redefinición de MAX_ALUMNOS. | Eliminé la constante duplicada y utilicé la que ya estaba definida en registro.h. |


