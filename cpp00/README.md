```
 ██████╗ ██████╗ ██████╗      ██████╗  ██████╗ 
██╔════╝██╔═══██╗██╔══██╗    ██╔═══██║██╔═══██╗
██║     ██████╔╝ ██████╔╝    ██║   ██║██║   ██║
██║     ██╔═══╝  ██╔═══╝     ██║   ██║██║   ██║
╚██████╗██║      ██║         ╚██████╔╝╚██████╔╝
 ╚═════╝╚═╝      ╚═╝          ╚═════╝  ╚═════╝ 
```
---

# CPP Module 00 📘

Este proyecto forma parte del currículo de **42 School** y es la introducción al mundo de la Programación Orientada a Objetos (OOP) usando C++. Aquí aprendemos los fundamentos de clases, métodos, `static`, `const`, `stdio`, y más, todo dentro del estándar C++98.

## Descripción del Proyecto 🧠

Este módulo contiene 3 ejercicios:

* **ex00 - Megaphone:** convierte cualquier input a mayúsculas, como un megáfono.
* **ex01 - PhoneBook:** agenda de contactos limitada a 8 registros, con reemplazo FIFO.
* **ex02 - Account:** sistema bancario simulado donde se reconstruye una clase a partir de su cabecera (`Account.hpp`) y un fichero de tests.

## Cómo compilar 🛠️

```bash
make run
```

Cada ejercicio tiene su propio Makefile, así que ejecuta el comando dentro del directorio correspondiente.

## Ejecución 🚀

### 📢 Megaphone (ex00)

```bash
./megaphone "42 School"
```

### 📇 PhoneBook (ex01)

```bash
./phonebook
```

Comandos disponibles:

* `ADD` → añade un nuevo contacto.
* `SEARCH` → muestra contactos y permite ver uno en detalle por índice.
* `EXIT` → cierra el programa.

### 🏦 Account System (ex02)

```bash
./account
```

El programa simula cuentas bancarias usando un archivo de tests predefinido. Se muestran depósitos, retiros y estados de cuenta.
| Al tratarse del standar 98, al compilar se muestran **warnings** de funciones **deprecated**

## Lo aprendido 💡

* Diferencias clave entre C y C++
* Encapsulamiento y clases básicas
* Métodos estáticos vs de instancia
* Inicialización de listas
* Manejo de `iostream`, `iomanip`, `string` , `chrono`