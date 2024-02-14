#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*------------- Estructura de datos -------------*/
typedef struct nodo {
    int data;
    struct nodo* next;
} nodo;

typedef nodo* TDAlista;

/*------------- Funciones y Operaciones -------------*/
TDAlista crearListaVacia(){  
    TDAlista lista = (TDAlista)malloc(sizeof(TDAlista));
    lista = NULL;
    return lista;
}

bool esListaVacia(TDAlista lista){
    if (lista == NULL){
        return true;
    } else {
        return false;
    }
}

void recorrerLista(TDAlista lista){
    if (!esListaVacia(lista)){
        nodo* puntero = lista;
        while (puntero != NULL){
            printf("%d ",puntero->data);
            puntero = puntero->next;
        }
        printf("\n");
    } else {
        printf("Lista vacia\n");
    }
}

void insertarInicio(TDAlista *lista, int dato){
    nodo* nuevoNodo = (nodo*)malloc(sizeof(nodo));
    nuevoNodo->data = dato;
    nuevoNodo->next = *lista;
    *lista =     nuevoNodo;
}

void insertarFinal(TDAlista *lista, int dato){
    nodo* nuevoNodo = (nodo*)malloc(sizeof(nodo));
    nuevoNodo ->data = dato;
    nuevoNodo ->next = NULL;
    if(esListaVacia(*lista)){
        *lista = nuevoNodo;
    }
    nodo* puntero = *lista;
    while (puntero->next != NULL){
        puntero = puntero->next;
    }
    puntero->next = nuevoNodo;
}