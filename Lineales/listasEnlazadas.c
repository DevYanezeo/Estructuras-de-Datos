#include "listasEnlazadas.h"

int main(){
    TDAlista lista = crearListaVacia();
    printf("Despues de crear Lista: ");
    recorrerLista(lista);
    insertarInicio(&lista, 2);
    insertarInicio(&lista, 3);
    insertarInicio(&lista, 4);
    insertarInicio(&lista, 5);
    insertarInicio(&lista, 6);
    insertarInicio(&lista, 7);
    printf("Despues de insertar al inicio: ");
    recorrerLista(lista);
    insertarFinal(&lista, 1);
    printf("Despues de insertar al final: ");
    recorrerLista(lista);


    return 1;
}