#include <stdio.h>
#include <stdlib.h>

char *leerArchivo(char *nombreArchivo, int *largo) {
    FILE *archivo = fopen(nombreArchivo, "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        exit(1);
    }
    fscanf(archivo, "%d", largo);

    char *arreglo = (char *)malloc(sizeof(char) * (*largo));

    // Leer el tablero, ignorando espacios en blanco
    for (int i = 0; i < *largo; i++) {
        char caracter;
        do {
            caracter = fgetc(archivo);
        } while (caracter == ' ' || caracter == '\n'); // Ignorar espacios y saltos de línea
        arreglo[i] = caracter;
    }
    
    fclose(archivo);
    return arreglo;
}


void imprimirTablero(char *arreglo, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            int indice = i * columnas + j;
            printf("%c ", arreglo[indice]);
        }
        printf("\n");
    }
}
int main(int argc, char *argv[]) {
    int largo;
    char *miArreglo = leerArchivo(argv[1], &largo);
    
    printf("Tablero leido del archivo:\n");

    int filas = largo / atoi(argv[2]);
    int columnas = atoi(argv[2]);
    for (int i = 0; i < largo; i++) {
        printf("%c ", miArreglo[i]);
    }
    printf("\n");


    imprimirTablero(miArreglo, filas, columnas);

    free(miArreglo); // Liberar la memoria asignada dinámicamente

    return 0;
}
