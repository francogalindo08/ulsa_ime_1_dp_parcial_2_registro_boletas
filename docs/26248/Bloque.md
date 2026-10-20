## 1. Autor

**Nombre:** [Diego Serrano]
**Matrícula:** [26248]
**Bloque y opción elegida:** registro [Lista de aprobados y reprobados]
**Archivo de código:** [Aprobadaos.h]

## 2. Propósito

¿Qué hace tu bloque y para qué le sirve a quien usa el programa?
Mi bloque es una lista donde aparece el promedio de cada alumno registrado y marca su estatus de aprobado y reprobado 

## 3. Entradas y salidas

¿Qué recibe tu bloque (parámetros y datos del teclado) y qué produce (lo que imprime o devuelve)?

mi bloque recibe las calificaciones ingresadas a la hora de capturar alumnos y produce si esta aprobado o reprobado

## 4. Decisiones de diseño

Explica cada decisión y por qué la tomaste.

**¿Qué funciones tiene tu bloque y qué hace cada una?**
recibe un nombre del arreglo e imprime sus calificacion y su nombre usando por ejemplo:
BuscarAlumno(std::string nombre, std::string Alumnos[], int tam) donde se declaran variables 

**¿Qué ciclo usaste y por qué ese?**

 FOR para recorrer arreglos desde el inicio hasta donde sea el limite de alumnos capturados 

**¿Qué acumuladores o contadores usaste y con qué valor inician?**
Contador de iteración (int i = 0): Inicia en 0 para recorrer los elementos del arreglo desde el primer índice.

Variable de tamaño (int tam = 6): Define el límite o capacidad máxima del arreglo.

Valor centinela (posicion != -1): Se utiliza como indicador lógico para comprobar si una búsqueda fue exitosa o si el alumno no se encuentra registrado.

**¿Dónde está tu decisión múltiple y qué casos cubre?**
tengo un if (Alumnos[i] == nombre) para revisar si coincide con el elemento actual; si es así, regresa la posición, y si termina el ciclo sin encontrarlo, regresa -1.
 
**¿Qué constantes definiste y por qué son constantes?**
 Definí el tamaño máximo de los arreglos. Las puse como constantes para evitar que cambien por error mientras corre el programa y para mantener fijo el espacio de almacenamiento de los nombres y calificaciones.

**¿Qué casos de rechazo maneja tu bloque y qué mensaje muestra en cada uno?**
Caso de alumno no encontrado: Pasa cuando escribo un nombre que no está registrado en el sistema.


## 5. Receta

Tu receta en pseudocódigo, escrita antes de programar.
1. Inicio
2. Declarar el tamaño y los arreglos paralelos para alumnos y materias
3. Pedir el nombre del alumno que quiero consultar
4. Leer el nombre que ingreso
5. Validar con la función de búsqueda si el alumno ya está registrado
6. Si lo encuentra, imprimir su nombre y sus calificaciones por materia
7. Si no lo encuentra, mostrar el mensaje de error
8. Fin

**¿Probaste tu receta a mano con los datos del escenario? ¿Qué corregiste?**
Sí, la probé y tuve que agregar la declaración de las materias, ya que en mi primera receta no las había contemplado.


## 6. Bitácora de dudas y errores

| # | Duda o error | Cómo lo resolví |
| --- | --- | --- |
| 1 | el uso del nombre de las materias marcando error | las declare con el nombre que tenian los demas archivos |
| 2 | la impresion de mensajes | [puse el std ...] |
| 3 |  los casos usando arreglo | me documentaba con el profesor  |
