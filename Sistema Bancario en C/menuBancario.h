#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include <stdbool.h>

/* Estructuras de datos */
typedef struct nodoGenerico {
    int dato;
    struct nodoGenerico* puntero;
}nodo;
typedef nodo* TDAlista;

TDAlista crearListaVacia(){
    TDAlista lista=
}

/*
 * Función: registrarUsuario
 * Descripción:
 * Parámetros: 
 * Retorna: No aplica
 */
void registrarUsuario(int rut, int clave){
    printf("Registrando usuario.....");


}

/*
 * Función: loginUsuario
 * Descripción:
 * Parámetros: 
 * Retorna: No aplica
 */
void loginUsuario(int rut, int clave){
    printf("Loggeando usuario.....");


}



/*
 * Función: menu
 * Descripción: Esta funcion inicia el menu principal, con 3 opciones, inicio, registro y para salir.
 * Parámetros: No recibe parametros, pero crea algunas variables como:
 *   - salir: Booleano instanciado en falso, utilizado en el ciclo while, cuando cambia a verdadero, se termina el menu.
 *   - seleccion: Entero que almacena la opcion seleccionada por el usuario
 *   - rutUsuario: Entero, Rut del usuario utilizado para iniciar sesion 
 *   - pinClave: Entero, almacena la clave pin del usuario
 * Retorna: No aplica
 */
void menu (){
    bool salir = false;
    int seleccion;
    int rutUsuario;
    int pinClave;
    while (!salir) {

        printf("\n--------------------------------------\n");
        printf("|    Sistema Bancario Inicio         |\n");
        printf("--------------------------------------\n");

        printf("Ingrese una de las siguientes opciones: \n");
        printf("1. Registrar Usuario\n");
        printf("2. Iniciar Sesion\n");
        printf("3. Salir\n");

        scanf("%d", &seleccion);
    
        switch (seleccion){
            case 1:
                printf("Introduzca su RUT sin puntos ni digito identificador. Ejemplo: Si su RUT es 12.345.678-9, escriba 12345678: \n");
                scanf("%d",&rutUsuario);
                printf("Ingrese su PIN de cuatro digitos: ");
                scanf("%d",&pinClave);
                registrarUsuario(rutUsuario, pinClave);

                break;
            case 2:
                printf("Introduzca su RUT para iniciar sesion. Sin puntos ni digito identificador. Ejemplo: Si su RUT es 12.345.678-9, escriba 12345678: \n");
                scanf("%d", &rutUsuario);
                printf("Ingrese su PIN de cuatro digitos: ");
                scanf("%d",&pinClave);
                loginUsuario(rutUsuario, pinClave);
                break;

            case 3:
                printf("Saliendo del programa......");
                salir = true;

                break;
            default:
                printf("Opcion invalida, reintente");
        }
    }
}

    




