#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


/* Estructuras de datos LISTA ENLAZADA */
typedef struct nodoGenerico {
    int dato;
    struct nodoGenerico* puntero;
}nodo;
typedef nodo* TDAlista;

TDAlista crearListaVacia(){
    TDAlista lista=(TDAlista)malloc(sizeof(TDAlista));
    lista=NULL;
    return lista;
}


void insertarInicio(TDAlista* lista, int rut){
    nodo* nuevo = (nodo*)malloc(sizeof(nodo));
    nuevo->dato = rut;
    nuevo->puntero = *lista;
    *lista=nuevo;
}
int esListaVacia(TDAlista lista){
    if (lista == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

/* Estructuras de datos TDA PILA */
typedef struct {
    int capacidad;
    int size;
    nodo* tope;
}TDApila;

TDApila* crearPilaVacia(int capacidad){
    TDApila* pila = (TDApila*)malloc(sizeof(TDApila));
    pila->capacidad = capacidad;
    pila->size=0;
    pila->tope=NULL;
    return pila;
}
int esPilavacia(TDApila* pila){
    if (pila->size == 0){
        return 1;
    }
    else
        return 0;
}

void apilar(TDApila* pila, int rut){
    nodo* nodoAux=(nodo*)malloc(sizeof(nodo));
    nodoAux->dato = rut;
    nodoAux->puntero = pila->tope;
    
        

    
}


FILE *abrirArchivos(const char *name,char *modo){
    FILE *archivo;
    archivo = fopen(name, modo);
    if (archivo == NULL){
        printf("No se pudo abrir el archivo");
    }
    return archivo;
}




/*
 * Función: registrarUsuario
 * Descripción:
 * Parámetros: 
 * Retorna: No aplica
 */ 
void registrarUsuario(int rut, int clave){
    printf("Registrando usuario.....");
    FILE *archivo = abrirArchivos("usuarios.lst", "a");
    if (archivo != NULL){
        fprintf(archivo, "%d, %d\n", rut, clave);
        printf("Registrado con exito!");
        fclose(archivo);
    }

}

/*
 * Función: loginUsuario
 * Descripción:
 * Parámetros: 
 * Retorna: No aplica
 */
void loginUsuario(int rut, int clave){
    printf("Loggeando usuario.....");
    FILE *archivo = abrirArchivos("usuarios.lst", "r");
    if (archivo != NULL){
        crearListaVacia();
        

    }


}

void menuClientes(){

    
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

    
