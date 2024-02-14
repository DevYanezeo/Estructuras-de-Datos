"""
Listas Enlazadas:
Implementación de una Playlist con Listas Enlazadas:

Implementa una playlist de canciones utilizando una lista enlazada simple. 
Debes tener una estructura Cancion que represente una canción y contenga información como el título de la canción y el artista. Luego, implementa funciones para:

    1) Agregar una canción al principio de la playlist.
    2) Agregar una canción al final de la playlist.
    3) Agregar una canción en una posición específica de la playlist.
    4) Mostrar la lista de canciones en la playlist.

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
"""
# Estructura de datos #
class Nodo:
    def __init__(self, cancion):
        self.cancion = cancion
        self.siguiente = None

## Constructor
class Playlist:
    def __init__(self):
        self.cabeza = None
    
    def insertarInicio(self, cancion):
        nuevoNodo = Nodo(cancion)
        if(self.cabeza is None):
            self.cabeza = nuevoNodo
            return
        nuevoNodo.siguiente = self.cabeza
        self.cabeza = nuevoNodo





class Cancion:
    def __init__(self, titulo, artista):
        self.titulo = titulo
        self.artista = artista  
    ## Metodo
    def mostrar_info(self):
        print(f"La cancion {self.titulo} fue compuesta por el Artista {self.artista}")


    

imagine = Cancion("Imagine", "John Lennon")
imagine.mostrar_info()
Playlist_1 = Playlist()
Playlist_1.insertarInicio(imagine)
print(imagine)
