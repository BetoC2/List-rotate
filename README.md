# List Lib A

La primera parte de una libreria de listas.

rotate_list

## About

`List_lib` es una herramienta para manipular listas.

contiene una funcion

- rotate_list

### rotate_list

`input`: una lista de enteros, un entero `rotation_factor`

la función `rotara` los elementos de la lista tal que los elementos se recorran `rotation_factor` veces.

`i.e` para la lista 

> `[1]->[2]->[3]->[4]->null`, 

si tenemos un `rotation_factor` de `1`, el resultado será

> `[4]->[1]->[2]->[3]->null`

puesto que la lista "roto" cada elemento por `1` espacio, `[4]` es nuestro nuevo head, y [`3`] el ultimo elemento.

`i.e` para la lista 

> `[1]->[2]->[3]->[4]->null`, 

si tenemos un `rotation_factor` de `4`, el resultado será

> `[1]->[2]->[3]->[4]->null`

**Nota** : Es mejor una solución sub-optima que diseñen e ingenien ustedes, a la solución óptima que encontremos en internet.


Al ejecutarse el programa, se leera un archivo `input.txt` y recibiremos dos argumentos de `main`: la
operación que desea realizar el usuario. (`rotate_list`) y `rotation_factor`.

cada linea del archivo `input` contiene un entero con signo, que representa un nodo de la lista.

al terminar la ejecución, la lista resultante será guardada en el archivo `result.txt` con el formato de su elección


## Restricciones

- la lista debe de ser __single__ linked list (no es permitido que sea __double__).

usaremos archivos para simular `streams` de datos, por lo tanto, un archivo
únicamente podra:

- Ser leido UNA vez (`no-rewind`).
- Ser abierto UNA vez.
- Al leer una linea del archivo, ya no podremos leer esa linea de nuevo.
- El usuario que usará su programa no tiene permisos de editar ningún archivo diferente a `result.txt`
- `result.txt` solo puede escribirse, no tenemos permisos de lectura (`w`).

## Podemos asumir que

- Todas las lineas de `input.txt` terminar con `'\n'`
- Los entero del `input.txt` pueden representarse correctamente en un entero con signo de 4 bytes.

## Ejemplo

```console
[input.txt]
1
2
3
4

```

`./app rotate_list 5`

Al terminar la ejecución del programa, tendrá que existir un archivo `result.txt` tal que

```console
[result.txt]
4
1
2
3

```
o si lo desean:

```console
[result.txt]
4 1 2 3 
```