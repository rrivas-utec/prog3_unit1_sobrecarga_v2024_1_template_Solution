# Task #1: Sobrecarga de Operadores en C++
**course:** Programación III  
**unit:** 1  
**cmake project:** prog3_unit1_sobrecarga_operadores_v2024_1

## Question #1 - (10 points)
### **Título**: Mejora de Contenedor Vector en C++
**Descripción:**  
El objetivo de este proyecto es crear un archivo de cabecera (`vector_enhancement.h`) y un archivo de implementación (`vector_enhancement.cpp`) que extienda las capacidades del contenedor estándar `std::vector` de la biblioteca estándar de C++. Se busca incorporar funcionalidades adicionales mediante el uso de sobrecargas de operadores y funciones amigas, para facilitar operaciones que comúnmente son realizadas en vectores, pero que no están directamente disponibles en `std::vector`. Este proyecto inicialmente se enfocará en vectores del tipo entero (`int`).

Para ello, se pide implementar las siguientes funcionalidades:

**Operador de negación (`-`):**  
Sobrecargar el operador de negación (`-`) para permitir negar todos los elementos de un `std::vector`. Por ejemplo, si `v = {1, 2, 3};`, entonces `-v` debería resultar en `{-1, -2, -3}`.

**Operador de negación (`++`):**  
Sobrecargar el operador de incremento (`++`) para permitir incrementar en una unidad todos los elementos de un `std::vector`. Por ejemplo, si `v = {1, 2, 3};`, entonces `++v` debería resultar en `{2, 3, 4}`.

**Operador de negación (`--`):**  
Sobrecargar el operador de decremento (`--`) para permitir decrementar en una unidad todos los elementos de un `std::vector`. Por ejemplo, si `v = {1, 2, 3};`, entonces `--v` debería resultar en `{0, 1, 2}`.

**Operador de desplazamiento a la izquierda (`<<`):**  
Permitir la impresión directa del contenido de un `std::vector` utilizando el operador `<<`. La impresión debe ser amigable, incluyendo elementos entre corchetes y separados por comas. Por ejemplo, `std::vector<int> v = {1, 2, 3};` debería imprimir `[1, 2, 3]`.

**Operaciones matemáticas de elemento a elemento:**  
Implementar sobrecargas que permitan realizar operaciones matemáticas básicas (suma, resta, multiplicación y división) entre dos vectores de igual tamaño elemento a elemento, o entre un vector y un escalar. Por ejemplo, si `v1 = {1, 2, 3};` y `v2 = {4, 5, 6};`, entonces `v1 + v2` debería resultar en `{5, 7, 9}`. De igual forma, si `v3 = {1, 2, 3};` y `escalar = 2;`, entonces `v3 * escalar` debería resultar en `{2, 4, 6}`.

**Concatenación de vectores:**  
Permitir la concatenación de dos `std::vector` mediante el operador +. Por ejemplo, si `v1 = {1, 2, 3};` y `v2 = {4, 5, 6};`, entonces `v1 + v2` debería resultar en `{1, 2, 3, 4, 5, 6}`.


## Question #2 - (10 points)
### **Título**: Implementación de la Clase `IntegerSet`
**Descripción:**  
Desarrollar una clase llamada `IntegerSet` que utilice internamente un `std::vector<int>` para almacenar elementos enteros. La clase debe garantizar que todos los elementos en el conjunto sean únicos (es decir, sin duplicados). Además, debe proporcionar una serie de operaciones básicas de conjuntos para facilitar la manipulación y la interacción con los datos almacenados.

La clase `IntegerSet` debe implementar los siguientes métodos públicos:

**Constructor y Destructor:**
- Implementar un constructor que inicialice el conjunto posiblemente vacío.
- Implementar un destructor si es necesario.

**Agregar Elemento (add):**
- Método para agregar un elemento al conjunto. Si el elemento ya existe, no se hace ninguna modificación.

**Eliminar Elemento (remove):**
- Método para eliminar un elemento del conjunto. Si el elemento no existe, no se hace ninguna modificación.

**Tamaño del Conjunto (size):**
- Método para obtener el número de elementos en el conjunto.

**Vaciar el Conjunto (clear):**
- Método para eliminar todos los elementos del conjunto.

**Operador `()`:**
Sobrecargar el operador `()` para verificar si un elemento dado pertenece al conjunto. Por ejemplo, si `s = {1, 2, 3};`, entonces `s(2)` debería devolver `true`.

**Operador `|`:**
Sobrecargar el operador `|` para realizar la unión de dos conjuntos. Por ejemplo, si `s1 = {1, 2, 3};` y `s2 = {3, 4, 5};`, entonces `s1 | s2` debería resultar en `{1, 2, 3, 4, 5}`.

**Operador `&`:**
Sobrecargar el operador `&` para realizar la intersección de dos conjuntos. Por ejemplo, si `s1 = {1, 2, 3};` y `s2 = {3, 4, 5};`, entonces `s1 & s2` debería resultar en `{3}`.

**Operador `^`:**
Sobrecargar el operador `^` para realizar la diferencia simétrica de dos conjuntos. Por ejemplo, si `s1 = {1, 2, 3};` y `s2 = {3, 4, 5};`, entonces `s1 ^ s2` debería resultar en `{1, 2, 4, 5}`.

**Operador `<<`:**
Sobrecargar el operador `<<` para realizar la impresión del conjunto. La impresión debe ser amigable, incluyendo elementos entre corchetes y separados por comas. Por ejemplo, si `s = {1, 2, 3};`, entonces `std::cout << s;` debería imprimir `[1, 2, 3]`.

