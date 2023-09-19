#include <stdio.h>
#define N 3
//Bloque de Funciones

int MenorEntero(int A,int B){
    int menor;
    if (A < B){
        menor = A;}
    else{
        menor = B;}
    return menor;
}
int SumaEnteros(int A, int B){
    int Suma;
    Suma = A+B;
    return Suma;
}
int SumatoriaPositivos(int n){
    int suma=0;
    for (int i = 1; i <= n; i++){
        suma = suma + i;
    }
    return suma;
}
int menorNumero(int A[],int n){
    int menor = A[0];
    for (int i = 1; i<n; i++){
        if (menor>A[i]){
            menor = A[i];
        }
    }
    return menor;
}
int promedio(int A[],int n){
    int suma = 0;
    int promedio = 0;
    for (int i = 1; i<n; i++){
        suma = suma + A[i];
    }
    promedio = suma/n;
    return promedio;
}
int elementosRepetidos(int A[],int B[],int n,int m){
    int contador = 0;
    for (int i=0; i<n ;i++){
        for (int j=0; j<m; j++){
            if (A[i]==B[j]){
                contador++;
            }
        }
    }
    return contador;
}

void MultiplicarMatrices(int A[][N], int B[][N], int C[][N], int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            C[i][j] = 0;
            for (int k = 0; k < x; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void SumarMatrices(int A[][N], int B[][N], int C[][N], int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
    int Menor = MenorEntero(5,6);
    printf("EL menor es: %d\n",Menor);

    int Suma = SumaEnteros(3,5);
    printf("La suma es: %d\n",Suma);

    int Suma2 = SumatoriaPositivos(6);
    printf("Sumatoria es: %d\n", Suma2);

    int A[] = {1,2,3,4,5,6,7,9};
    int n = sizeof(A)/sizeof(A[0]);
    int B[] = {1,2,3,4,21,3,4};
    int m = sizeof(B)/sizeof(B[0]);

    int MenorArray = menorNumero(A,n);
    printf("El elemento menor del array es: %d\n", MenorArray);

    int promedioArray = promedio(A,n);
    printf("El promedio de los elementos es: %d\n", promedioArray);

    int cantidad = elementosRepetidos(A,B,n,m);
    printf("La cantidad de elementos repetidos es: %d\n", cantidad);


    int MatrizA[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int MatrizB[N][N] = {{9, 2, 7}, {6, 5, 4}, {3, 2, 1}};
    int MatrizResultado[N][N]; // Matriz para almacenar el resultado

    // Multiplicar MatricesA y MatrizB, almacenar el resultado en MatrizResultado
    MultiplicarMatrices(MatrizA, MatrizB, MatrizResultado,3);


    // Imprimir la matriz resultante (MatrizResultado)
    printf("Matriz Resultado (Multiplicación):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", MatrizResultado[i][j]);
        }
        printf("\n");
    }

    // Sumar MatricesA y MatrizB, almacenar el resultado en MatrizResultado
    SumarMatrices(MatrizA, MatrizB, MatrizResultado,3);

    // Imprimir la matriz resultante (MatrizResultado)
    printf("Matriz Resultado (Suma):\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", MatrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}