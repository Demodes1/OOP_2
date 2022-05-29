// Code programmed by Guillermo Esquivel
#include <iostream>
#include "reto.h"


int main(){
    Video Video1("Pelicula","Gravity", "Sci-fi", 150, 2019);
    Video Video2("Test1","fe","fe",50,2003,9.5);

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
                cout << "\n0 -> Volver al menú\n" << endl;
                cout << "Opcion: ";
                cin >> op2;
                cout << endl;
                if(op2 == 1){
                    Video1.getMuestraDatos();
                } else if (op2 == 2) {
                    Video2.getMuestraDatos();                    
                } else if (op2 == 0) {
                    break;
                } else {
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
                cout << "\n0 -> Volver al menú\n" << endl;
                cout << "Opcion: ";
                cin >> op2;
                cout << endl;
                if(op2 == 1){
                    Video1.getCalificaVideo();
                } else if (op2 == 2) {
                    Video2.getCalificaVideo();        
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