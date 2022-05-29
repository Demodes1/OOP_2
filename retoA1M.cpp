#include <iostream>
#include "reto.h"


// Method definition
void Video::setCalificaVideo(int _calificacion){
    calificacion = _calificacion;
}

void Video::getCalificaVideo(){
    int n;
    cout << "Ingresa la nueva calificacion: ";
    cin >> n;
    calificacion = n;
}    
void Video::setMuestraDatos(string _tipoVideo, string _nombreVideo, string _genero, int _calificacion, int _annoLanzamiento, int _duracion){
    tipoVideo = _tipoVideo;
    nombreVideo = _nombreVideo;
    genero = _genero;
    calificacion = _calificacion;
    annoLanzamiento = _annoLanzamiento;
    duracion = _duracion;
}
void Video::getMuestraDatos(){
    cout << "Tipo de video: " << tipoVideo << endl;
    cout << "Nombre de video: " << nombreVideo << " del genero: " << genero << endl;
    cout << "Año de lanzamiento: " << annoLanzamiento << " con duracion de: " << duracion << " minutos." << endl;
    cout << "Calificacion: " << (calificacion != 0 ? calificacion : 0) << endl << endl;
}  