// Sesión 02 Clases: Actividad III Version 2
// Programmed by Guillermo Esquivel

#include "Account.h"

int main(){
    Account c1(1300);
    Account c2(4000);

    cout << "El salto total de la cuenta 1 es: " << c1.getBalance() << endl;
    c1.getAdd();
    cout << "El nuevo salto total de la cuenta 1 es: " << c1.getBalance() << endl << endl;

    cout << "El salto total de la cuenta 2 es: " << c2.getBalance() << endl;
    c2.getWithDraw();
    cout << "El nuevo salto total de la cuenta 2 es: " << c2.getBalance() << endl;

    return 0;
}
