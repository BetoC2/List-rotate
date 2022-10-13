# Rotate-List

Un programa en C que contiene nuestra implementación de funciones del tipo de dato abstacto Lista, en el que diseñamos una función que es capaz de rotar una lista que se lee de un archivo de texto.

# Contenidos 
- [Instrucciones del ejercicio](/docs/Indicaciones.md)
- [Documentación](#acerca-de)
- [Conclusiones](/docs/conclusiones.md)


# Funcionamiento

Para poder llevar a cabo la actividad se dividió el código en dos distintos archivos, uno que posee la función main y una función llamda ```list_read```, mientras que en el otro archivo que posee la mayoría de las librerías utilizadas además de estar la definición de dos structs (List y Node) existen la mayoría de las funciones las cuales son: ```node_new```, ```list_new```, ```list_append```, ```list_print```, ```list_rotate``` y ```list_write```. Además, junto con lo anterior se encuentra el archivo .h **(header)** que permite conectar todo.

A continuación, se explica el funcionamiento de las funciones principales utilizadas:

- **list_read:** Esta función está hecha para leer el archivo que se recibe al ejecutar el programa (input.txt), recibiendo como argumento dicho archivo en donde se crea una variable lista la cual es un apuntador y es igual a la función ```list_new``` (implementada en la libreria *List.h*) que se encarga de crear espacio en memoria para guardar una lista. Hecho esto, se procede a escanear el archivo en un ciclo while con fscanf y obteniendo cada valor en cada línea del archivo input.txt, donde se utiliza la función ```list_append``` (encargada de agregar valores a la lista creada anteriormente) por cada repetición del ciclo. Una vez terminado el ciclo se retorna la variable list ya con todos los valores y la lista hecha.

- **list_write:** Esta es una función ```void``` que recibe como argumento la dirección de memoria de una lista, donde primero se crea un archivo con la funcion fopen llamado result.txt (en modo w, solo escribir), para después crear una variable ```current``` que tenga como valor el head de la lista. Después, se implementa en un ciclo while que mientras ```current``` tenga un valor válido se utilice la funcion fprintf la cual imprime los valores del archivo antes creado result.txt, y después el valor de ```current``` se pasa al siguiente, así terminando la implementación dentro del ciclo ```while```, repitiéndose hasta que se escriban todos los valores de la lista en result.txt. Finalmente, fuera del ciclo ```while```, se cierra el archivo con fclose y termina ```list_write```.

- **list_rotate:** Esta función recibe como argumentos la dirección de memoria de una lista y un int que es el ```rotation_factor```, en donde esta creada a rotar la lista (que el ultimo valor de la lista se mueva al principio, y los demás valores se recorran). Primero, tenemos un ```if``` que se encarga de asegurarse que la lista no esté vacía, y en caso de estarlo se retorna la función y termina. En caso de que exista procedemos a crear dos variables intermediarias como ```current``` y ```first```, las cuales el head de la lista recibida, para entrar así en un if que tiene como condición mientras que ```rotation_factor``` sea un valor válido (mayor que 0) en donde consiguientemente tenemos un ciclo while encargado de recorrer hasta el penúltimo valor válido de la lista, asignando a la variable current el valor de ```current->next```. Una vez hecho esto el head de la lista pasa a ser ```current->next``` y el siguiente valor del head de la lista procede a ser la variable ```first``` (recordando que guardamos anteriormente el head original de la lista ahí), recorriendo así el ultimo valor valido hacia el inicio de la lista y reconectándolo con el que estaba primero antes y el resto de la lista. Finalmente, igualamos current ```next``` a ```NULL```, y volvemos a llamar a la función ```list_rotate```, que recibe de igual manera la dirección de memoria de la lista, pero esta vez el ```rotation_factor``` restándose con 1, utilizando así recursividad para esta función. 

- **list_kill:** Esta función se encarga de borrar el espacio en memoria que ocupa una lista, para esto, se entra a un ciclo while que se repetirá hasta que un nodo no tenga una conexión, es decir, que ```curr->next == NULL```. Al finalizar, se libera el espacio de memoria que se utilizó para la lista que contine el apuntador del primer elemento de la lista.

El funcionamiento del programa se lleva a cabo de la siguiente manera, al ejecutar el programa desde comandos se necesita como primer argumento la palabra ```rotate_list```, de lo contrario no sucederá nada, de igual manera debe de existir un archivo llamado input.txt en la misma ubicación del programa para que se lleve a cabo lo deseado.
Como segundo argumento puede ser agregado un número que será interpretado como ```rotation_factor```, si lo que hay como segundo argumento no es un número o directamente no hay nada el valor de dicho argumento será tomado como 0.

Después de esto el programa procederá a leer el archivo input.txt, usar las funciones previamente mencionadas y devolverá un archivo de texto llamado result.txt que posee la lista obtenida del primer archivo ya transformada.
Ejemplo:
```
[input.txt]
1
2
3
4
5
```

```rotate_list.exe   rotate_list   3```

```
[result.txt]
3
4
5
1
2
```

# Precauciones

- El programa buscará un archivo llamado input.txt en el mismo directorio donde se encuentra el ejecutable. Si no encuentra el archivo, el programa terminará con el codigo de error 0xA y una advertencia.

- El programa recibe 2 argumentos para que funcione, el primero es "```rotate_list```", sin este, el programa dará una advertencia y terminará con el código de error 0. El segundo argumento es el "```rotation_factor```", si no se introduce, la lista no rotará pero sí escribirá el archivo result.txt.

- El programa asume que en el archivo input.txt hay numeros enteros separados por saltos de linea.