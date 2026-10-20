# Documentación del bloque

<!--
Esta es una plantilla. NO la modifiques.
Cópiala a docs/<matrícula>/bloque.md (por ejemplo, docs/123456/bloque.md)
y llena tu copia.
-->

## 1. Autor

**Nombre:** [franco galindo]
**Matrícula:** [26079]
**Bloque y opción elegida:** registro [Boleta por alumno]
**Archivo de código:** [BPA.h]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?
Mi bloque recibe cualquier nombre , previamente registrado en el arreglo y muestra su nombre y calificaciones de las tres materias, sirve para el que quisiese consultar sus calificaciones 

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

recibe un nombre e imprime nuevamente el nombre y calificaciones del alumno

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**
recibe un nombre del arreglo e imprime sus calificacion y su nombre usando por ejemplo:
BuscarAlumno(std::string nombre, std::string Alumnos[], int tam) donde se declaran variables 

**¿Qué ciclo usaste y por qué ese?**

 FOR e IF , para que sea ejecutado hasta que ya no haya lugares disponibles en el arreglo.

**¿Qué acumuladores o contadores usaste y con qué valor inician?**
int i = 0; i < tam; i++, contador para el arreglo
 int tam = 6; tamaño del arreglo
 posicion != -1 /para representar que no se encontró el nombre.

**¿Dónde está tu decisión múltiple y qué casos cubre?**
 for (int i = 0; i < tam; i++)
    {
        if (Alumnos[i] == nombre) {
            return i;
        }
    }
    return -1; el caso de guardar nombre en el arreglo de los alumnos y si no lo encuentra muestra error
    int posicion = BuscarAlumno(Nombre, Alumnos, tam);

    if (posicion != -1) {
        double mat = matematicas[posicion];
        double esp = espanol[posicion];
        double dp = disenoProgramas[posicion];

        std::cout << "Alumno: " << Alumnos[posicion] << "\n";
        std::cout << "Mate: " << mat << "\n";
        std::cout << "Espanol: " << esp << "\n";
        std::cout << "Diseno: " << dp << "\n";
    } else {
        std::cout << "Alumno no encontrado\n";
    } muestra solo si el nombre fue encontrado en el arreglo sus calificaciones


**¿Qué constantes definiste y por qué son constantes?**
el tamaño del arreglo , porque pues nomas se reuqieren 6 espacioes en nombre y 3 en calificaciones 

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**

si el alumno no fue encontrado , std::cout << "Alumno no encontrado\n";

## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.

```
1-inicio
2-declarar tamaño,arreglos, materias y alumnos
3- pedir nombre de cualquier alumno
4-leer nombre
5-validar que este registrado previamente
6-imprimir calificaciones por materia y nombre del alumno
7-fin
```

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**

Si , agregue lo de la declaracion de las materias, ya que en la primer receta no estaba.

## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | el uso del nombre de las materias marcando error | las declare con el nombre que tenian los demas archivos |
| 2 | la impresion de mensajes | [puse el std ...] |
| 3 |  los casos usando arreglo | me documentaba con el profesor  |
