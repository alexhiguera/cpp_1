```
```
 ██████╗ ██████╗ ██████╗      ██████╗   
██╔════╝██╔═══██╗██╔══██╗    ██╔═══██║ 
██║     ██████╔╝ ██████╔╝    ██║   ██║ 
██║     ██╔═══╝  ██╔═══╝     ██║   ██║
╚██████╗██║      ██║         ╚██████╔╝
 ╚═════╝╚═╝      ╚═╝          ╚═════╝  
```
---

# CPP Module 01 📘

Este módulo de **42 School** se centra en asignación de memoria, referencias, punteros a funciones miembro y estructuras condicionales como `switch`. Todo se desarrolla dentro del estándar **C++98**.

## Descripción del Proyecto 🧠

Este módulo contiene 7 ejercicios:

* **ex00 - BraiiiiiiinnnzzzZ:** crea una clase `Zombie`, métodos `announce`, `newZombie` y `randomChump`, y diferencia entre usar heap o stack para la gestión de memoria.

* **ex01 - Moar brainz!:** crea una función `zombieHorde` que genera un array de `Zombie` dinámicamente. Se practica manejo de memoria y loops para invocar métodos.

* **ex02 - HI THIS IS BRAIN:** trabajo con punteros y referencias. Se imprime dirección y valor de una variable string con `stringPTR` y `stringREF`.

* **ex03 - Unnecessary violence:** implementación de clases `Weapon`, `HumanA` y `HumanB`, donde se diferencia el uso de punteros y referencias como atributos de clase.

* **ex04 - Sed is for losers:** programa que reemplaza ocurrencias de una cadena por otra en un archivo dado, creando un nuevo archivo `.replace`.

* **ex05 - Harl 2.0:** implementación de la clase `Harl` con funciones que simulan diferentes niveles de log (debug, info, warning, error) usando punteros a funciones miembro.

* **ex06 - Harl filter:** extensión del ejercicio anterior con un filtro por niveles de log. Implementación con `switch` para mostrar mensajes a partir de un nivel dado.

## Cómo compilar 🛠️

```bash
make run
```

Cada ejercicio tiene su propio `Makefile`. Ejecútalo desde el directorio del ejercicio correspondiente.

## Ejecución 🚀

### 🧟 ex00

```bash
./zombies
```

Muestra creación y destrucción de zombies, diferenciando heap y stack.

### 🧟‍♂️ ex01

```bash
./horde
```

Crea un grupo de zombies, imprime sus mensajes, y libera la memoria.

### 🧠 ex02

```bash
./brain
```

Muestra dirección y contenido de una variable string usando punteros y referencias.

### ⚔️ ex03

```bash
./violence
```

Simula personajes atacando con armas, y cómo afecta el cambio del tipo de arma.

### ✍️ ex04

```bash
./replace input.txt s1 s2
```

Reemplaza todas las ocurrencias de `s1` por `s2` en el archivo y crea `input.txt.replace`.

### 📢 ex05

```bash
./harl
```

Simula quejas de distintos niveles con punteros a métodos de la clase `Harl`.

### 🔇 ex06

```bash
./harlFilter WARNING
```

Filtra y muestra solo los mensajes desde el nivel `WARNING` hacia arriba.

## Lo aprendido 💡

* Gestión de memoria: `new`, `delete`, heap vs stack
* Uso y diferencia entre punteros y referencias
* Clases con múltiples métodos y relaciones entre objetos
* Manipulación de archivos con C++
* Punteros a funciones miembro
* Estructuras condicionales `switch`

---

\| Al compilar bajo el estándar C++98 pueden aparecer **warnings** por funciones modernas. Evita usar C++11 o superior.
