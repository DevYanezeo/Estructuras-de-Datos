#include <stdlib.h>
#include <stdio.h>


/* Arreglos:

    valorMaximo: una función para encontrar el valor máximo en un arreglo de enteros.
    repeticionesValor: Crea una función para contar cuántas veces aparece un valor específico en un arreglo.
    promedioArray: Escribe un programa que sume todos los elementos de un arreglo y calcule su promedio.
    invertirArray: Implementa una función que invierta el orden de los elementos en un arreglo.
    Crea un programa que encuentre los elementos duplicados en un arreglo.
*/
int valorMaximo(int array[], int largo){ 
    int maximo = array[0];
    for(int i=1; i<largo; i++){
        if(array[i]>maximo){
            maximo = array[i];
        }
    }
    return maximo;
}

int repeticionesValor(int array[], int largo, int valor){
    int contador = 0;
    for (int i=0; i<largo; i++){
        if(array[i] == valor){
            contador++;
        }
    }
    return contador;
}

int promedioArray(int array[], int largo){
    int suma = array[0];
    float promedio = 0.0;
    for(int i=1; i<largo; i++){
        suma = array[i]+suma;
    }
    promedio = (float)suma/largo;
    return promedio;
}

void invertirArray(int array[], int largo){
    int inicio = 0;
    int fin = largo-1;
    while (inicio<fin){
        int aux = array[inicio];
        array[inicio] = array[fin];
        array[fin] = aux;
        inicio ++;
        fin --;
    }
}
int elementosDuplicados(int array[], int largo){

}

int mainArray(){
    // Declaracion e iniciacion de arreglo de enteros
    int Arreglo[5] = {9,5,6,7,6};
    int largo = sizeof(Arreglo)/sizeof(Arreglo[0]);
    printf("Dado el Arreglo: ");
    for (int i=0; i<largo; i++){
        printf("%d ",Arreglo[i]);
    }
    int maximo = valorMaximo(Arreglo, largo);
 

    printf("\nEl valor maximo del array es: %d\n",maximo);
    int contador = repeticionesValor(Arreglo, largo, 6);     // Aqui cambiar el tercer argumento para probar con otros valores
    printf("El valor se repite %d veces\n", contador);
    int promedio = promedioArray(Arreglo, largo);
    printf("El promedio es: %d\n", promedio);

    invertirArray(Arreglo, largo);
    printf("Arreglo Invertido: ");
    for (int i=0; i<largo; i++){
        printf("%d ",Arreglo[i]);
    }

    return 0;
}

/*
Listas Enlazadas:

Implementación de una Playlist con Listas Enlazadas:

Implementa una playlist de canciones utilizando una lista enlazada simple. 
Debes tener una estructura Cancion que represente una canción y contenga información como el título de la canción y el artista. Luego, implementa funciones para:

    Agregar una canción al principio de la playlist.
    Agregar una canción al final de la playlist.
    Agregar una canción en una posición específica de la playlist.
    Mostrar la lista de canciones en la playlist.

Eliminar una Canción Específica:

Escribe una función que permita eliminar una canción específica de la playlist enlazada. 
Puedes identificar la canción por su título o por alguna otra característica única.

Invertir el Orden de la Playlist:

Implementa una función que invierta el orden de las canciones en la playlist, 
de modo que la última canción se convierta en la primera y así sucesivamente.

Detectar si la Playlist tiene un Ciclo:

Aunque en una playlist de canciones no es común tener ciclos, 
puedes adaptar el ejercicio original para verificar si la lista enlazada tiene ciclos o repite canciones.

Combinar dos Playlists en una sola:

Escribe un programa que tome dos playlists de canciones y las combine en una sola playlist más grande.
 Puedes implementar una función que tome dos listas enlazadas y las fusione en una nueva lista enlazada.
*/

// 1) Estructura de TDA listas enlazadas

typedef struct cancion {
    char* titulo;
    char* artista;
    struct cancion* siguiente; 
} cancion;

typedef cancion* Playlist;

void insertarInicio(Playlist* playlist, const char* titulo, const char* artista){
    cancion* nuevaCancion = (cancion*)malloc(sizeof(cancion));
    nuevaCancion->titulo = titulo;
    nuevaCancion->artista = artista;
    nuevaCancion->siguiente = *playlist;
}

void insertarFinal(Playlist* playlist, const char* titulo, const char* artista){
    cancion* nuevaCancion = (cancion*)malloc(sizeof(cancion));
    nuevaCancion->titulo = strdup(titulo);
    nuevaCancion->artista = strdup(artista);
    nuevaCancion->siguiente = NULL;

    if (*playlist == NULL ){
        *playlist = nuevaCancion;
    } else {
        cancion* ultimo = *playlist;
        while (ultimo->siguiente != NULL){
            ultimo = ultimo->siguiente; 
        }
        ultimo->siguiente = nuevaCancion;
    }
}

void insertarEn(){

}

void mostrarPlaylist(){
    
}

int mainListas(){
    Playlist playlist=(Playlist)malloc(sizeof(Playlist));
    playlist=NULL;
    insertarInicio(&playlist, "PERREA KTM", "Julianno Sosa");



    

}

/*
Pilas:

    Implementa una pila utilizando una lista enlazada.
    Crea funciones para realizar operaciones de apilado (push) y desapilado (pop).
    Escribe un programa para verificar si una expresión matemática con paréntesis está balanceada utilizando una pila.
    Implementa una función que convierta una expresión infija en notación posfija (postfix) utilizando una pila.
    Crea un programa que evalúe una expresión posfija utilizando una pila.

Colas:

    Implementa una cola utilizando una lista enlazada.
    Crea funciones para realizar operaciones de encolado (enqueue) y desencolado (dequeue).
    Escribe un programa que simule un sistema de administración de tareas pendientes (to-do) utilizando una cola.
    Implementa una cola de prioridad, donde los elementos tienen un valor de prioridad y se atienden en orden de prioridad.
    Crea un programa que simule el funcionamiento de un sistema de impresión de documentos utilizando colas.

Grafos:

    Crea una representación de grafo utilizando una matriz de adyacencia.
    Implementa funciones para agregar y eliminar cancions y aristas en un grafo.
    Escribe un programa para realizar un recorrido en profundidad (DFS) en un grafo.
    Implementa un algoritmo de búsqueda de caminos más cortos (por ejemplo, Dijkstra) en un grafo ponderado.
    Crea un programa que detecte ciclos en un grafo utilizando el algoritmo de detección de ciclos en grafos dirigidos.

*/

int main(){
    mainArray();

    return 0;
}