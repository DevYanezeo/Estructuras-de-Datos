## Estructuras de datos en PYTHON

"""
Manipulación de Arreglos de enteros: Implementación de Funciones

    elementoMaximo: Una función para encontrar el elemento máximo en un arreglo.
    contarElemento: Crea una función para contar cuántas veces aparece un elemento específico en el arreglo.
    promedioArreglo: Escribe un programa que calcule el promedio de todos los elementos en el arreglo.
    invertirArreglo: Implementa una función que cambie el orden de los elementos en el arreglo.
    elementosRepetidos: Crea un programa que identifique elementos que aparecen en múltiples ocasiones en el arreglo.
"""
Arreglo = [8,7,5,4,2,1,4,5]

def elementoMaximo(array):
    longitud = len(array)
    maximo = array[0] 
    i = 1
    while longitud > i:
        if array[i] > maximo:
            maximo = array[i]
        i = i+ 1
    print (maximo) 

def contarElemento(array, elemento):
    longitud = len(array)
    contador = 0
    i = 0
    while longitud > i:
        if array[i] == elemento:
            contador = contador + 1
        i = i+1
    print (contador)    

def promedioArreglo(array):
    longitud = len(array)
    suma = array[0]
    i = 1
    while longitud > i:
        suma = suma + array[i]
        i = i+1
    promedio = suma/longitud
    print (promedio)

def invertirArreglo(array):
    longitud = len(array)
    inicio = 0
    fin = longitud - 1
    while inicio<fin:
        aux = array[inicio]
        array[inicio] = array[fin]
        array[fin] = aux
        inicio = inicio + 1
        fin = fin - 1
    return(array)

def elementosRepetidos(array):
    repetidos = []
    longitud = len(array)
    i = 0
    while longitud > i:
        j = i + 1
        while longitud > j:
            if array[i] == array[j] and array[i] not in repetidos:
                repetidos.append(array[i])
            j += 1
        i += 1
    return repetidos 


print(Arreglo)
contarElemento(Arreglo, 5)
elementoMaximo(Arreglo)
promedioArreglo(Arreglo)
invertirArreglo(Arreglo)
print(Arreglo)
repetidos = elementosRepetidos(Arreglo)
print(repetidos)

