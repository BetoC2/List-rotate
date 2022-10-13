Regresar a [Readme](../README.md)

---

# Conclusiones del Trabajo

- [Yael](#conclusiones-de-yael)
- [Alfredo](#conclusiones-de-alfredo)
- [Miguel](#conclusiones-de-miguel)
- [Alberto](#conclusiones-de-alberto)

## Conclusiones de Yael

Durante el transcurso de esta actividad pudieron ser repasados varios temas vistos en esta clase hasta ahora, en primer lugar, se usaron apuntadores, algo obvio a este punto en realidad, así como el leer y escribir en un archivo de texto y finalmente el uso de listas.

Para comenzar con el trabajo se decidió rehacer las funciones vistas en clase que nos permitían manejar las listas, usando solo las necesarias como el crear nodos, crear listas y hacer append en estas. Además de imprimir la lista para ir viendo el avance que teníamos en cuanto a la actividad asignada.

Respecto a la función que permitía voltear la lista no fue algo demasiado complicado de hacer, al igual que la de append o la de delete solo hacía falta recorrer la lista hasta acercarse al último elemento, en este caso nos tuvimos que detener en el penúltimo ya que además de insertar el último al principio teníamos que hacer que el ahora último apuntara a ```NULL```, algo muy complejo de hacer si nos deteníamos al final ya que no se podía regresar en la lista.

Para la mayoría de los *ifs* decidimos no usar igualaciones, por ejemplo, ```a==NULL```, dado que directamente lo contenido en los paréntesis era suficiente además de que se veía mejor.
La verdadera complicación surgió a la hora de leer y escribir el archivo, en un principio la función ```fscanf``` no regresaba lo que esperábamos, además de que en ocasiones el cursor no avanzaba. Finalmente lo dejamos por un tiempo para después resolverlo con el propio ```fscanf``` como condición del ciclo, ya que al parecer cuando el archivo termina este regresa -1.

Para escribir el archivo si bien hubo algunas complicaciones no fue tan difícil como lo anterior, solo unos cuantos errores que se arreglaron rápidamente.

## Conclusiones de Alfredo

Para concluir quiero hablar acerca de cómo integramos los temas que hemos visto hasta ahora, al menos para el segundo examen que viene siendo struct, memoria dinámica, contenedores etcétera, podemos integrarlo en un código además de que al principio parecía tardado implementar las funciones que se solicitaron pero una vez checando el código se logró hacerlo de manera sencilla sin dejar atrás la parte del código que el maestro nos mostró, seguimos usando la aritmética de apuntadores como se debería desde un principio además de los archivos

## Conclusiones de Miguel

## Conclusiones de Alberto

En la elaboración de este proyecto, me di cuenta de la importancia de los tipos de datos abstractos, me parece que tienen una gran utilidad y me parece muy interesante poder entender el funcionamiento que hay detrás de estos tipos de datos, porque en lenguajes de más alto nivel como Python, sabes que funciona, pero no cómo y por qué. Además, considero que es necesario tener la noción de que las estructuras de datos complejas tienen una infinidad de funciones.

Por otra parte, también tuvimos la oportunidad de poner en practica la parte de hacer funciones semánticamente significativas para el usuario, pero con esta parte de ocultarle al usuario final el funcionamiento y que pueda utilizar estos datos sin preocuparse por lo que haya detrás, es por esto que tomamos algunas decisiones como poner la función ```list_write()``` en la librería dedicada a las listas. Esto para que no se trabaje con los nodos en el documento main.c, porque esta estructura de datos está oculta para el usuario. 

Por último, nos enfrentamos a varias dificultades para realizar el proyecto, pero la mayor fue la lectura del archivo de texto, pero después de investigar un poco decidimos utilizar la función ```fscanf()``` para convertir los datos del archivo a enteros, además aprendimos que estas funciones de entrada y salida de texto generalmente suelen devolver por defecto el valor -1 al finalizar (cuando no lee nada), es por esto que pudimos realizar un ciclo para que termine de leer cuando se regrese dicho valor. 
