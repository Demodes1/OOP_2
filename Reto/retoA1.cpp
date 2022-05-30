// Code programmed by Guillermo Esquivel
#include <iostream>
#include "reto.h"


int main(){
    Video Video1("Pelicula","Gravity", "Sci-fi", 150, 2019);
    Video Video2("Test1","fe","fe",50,2003,9.5);
    Pelicula Pelicula1("Pelicula", "Piratas del caribe","Sci-fi",34, 2004);
    Pelicula Pelicula2("Pelicula", "The arrival", "Sci-fi", 230,2011,10);
    Serie Serie1("Serie", "Love, Death and Robots", "Sci-fi", 1120, 2022);
    Serie Serie2("Serie", "Stranger Things", "Sci-fi", 1140, 2020);
    Serie Serie3("Serie", "Black Mirror", "Sci-fi", 2120, 2021);

    int op = -1;
    while(op != 0){
        int op = -1;
        cout << "\n\n-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.- Video Database -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
        cout << "\nElige una opcion\n" << endl;
        cout << "1 -> Consultar videos" << endl;
        cout << "2 -> Calificar videos" << endl << endl;
        cout << "0 -> CERRAR\n" << endl;
        cout << "Opcion: ";
        cin >> op;
        cout << endl;

        if(op == 1){
            int op2 = -1;
            while(op2 != 0){
                int op2 = -1;
                cout << "-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
                cout << "\n\nElige alguno de nuestros videos" << endl;
                cout << "1 -> Video 1" << endl; 
                cout << "2 -> Video 2" << endl;
                cout << "3 -> Pelicula 1" << endl;
                cout << "4 -> Pelicula 2" << endl;
                cout << "5 -> Serie 1" << endl;
                cout << "6 -> Serie 2" << endl;
                cout << "7 -> Serie 3" << endl;
                cout << "\n0 -> Volver al menú\n" << endl;
                cout << "Opcion: ";
                cin >> op2;
                cout << endl;
                if(op2 == 1){
                    Video1.getMuestraDatos();
                } else if (op2 == 2) {
                    Video2.getMuestraDatos();                    
                } else if (op2 == 3) {
                    Pelicula1.getMuestraDatos();
                } else if(op2 == 4){
                    Pelicula2.getMuestraDatos();
                } else if(op2 == 5){
                    Serie1.getMuestraDatos();
                } else if(op2 == 6){
                    Serie2.getMuestraDatos();
                } else if(op2 == 7){
                    Serie3.getMuestraDatos();
                } else if(op2 == 0){
                    break;
                } else{
                    cout << "Tal opcion no esta disponible, prueba de nuevo!" << endl;
                }
            }
        } else if (op == 2) {
            int op2 = -1;
            while(op2 != 0){
                int op2 = -1;
                cout << "-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.--.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-" << endl;
                cout << "Elige alguno de nuestros videos" << endl;
                cout << "1 -> Video 1" << endl; 
                cout << "2 -> Video 2" << endl;
                cout << "3 -> Pelicula 1" << endl;
                cout << "4 -> Pelicula 2" << endl;
                cout << "5 -> Serie 1" << endl;
                cout << "6 -> Serie 2" << endl;
                cout << "\n0 -> Volver al menú\n" << endl;
                cout << "Opcion: ";
                cin >> op2;
                cout << endl;
                if(op2 == 1){
                    Video1.getCalificaVideo();
                } else if (op2 == 2) {
                    Video2.getCalificaVideo();        
                } else if (op2 == 3) {
                    Pelicula1.getCalificaVideo();
                } else if(op2 == 4){
                    Pelicula2.getCalificaVideo();
                } else if(op2 == 5){
                    Serie1.getCalificaVideo();
                } else if(op2 == 6){
                    Serie2.getCalificaVideo();
                } else if(op2 == 7){
                    Serie3.getCalificaVideo();
                } else if (op2 == 0) {
                    break;
                } else {
                    cout << "Tal opcion no esta disponible, prueba de nuevo!" << endl;
                }
            }
        } else if (op == 0) {
            cout << "Muchas gracias por usarnos, hasta la proxima :)" << endl;
            break;
        } else {
            cout << "Tal opcion no esta disponible, prueba de nuevo!" << endl;
        }
    }
    return 0;
}
