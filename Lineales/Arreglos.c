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

