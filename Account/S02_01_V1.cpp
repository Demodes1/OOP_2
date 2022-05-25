// Sesión 02 Clases: Actividad III Version 1
// Programmed by Guillermo Esquivel

#include <iostream>

using namespace std;

// ----------------------------- Class -----------------------------
class Account {
    // ----------------------------- Methods -----------------------------
    public:
        Account(int _balance){
            if (_balance <= 0){
                _balance = 0;
                cout << "Saldo invalido" << endl;
            } 
            else {
                balance = _balance;
            }
        }
        void setAdd(int _balance){ balance = _balance; }
        int getAdd(){
            cout << "Ingresa el monto que deseas añadir: ";
            cin >> b;
            cout << endl;
            balance += b;
            return balance;
        }
        void setWithDraw(int _balance){ balance = _balance; }
        int getWithDraw(){
            cout << "Ingresa el monto que deseas retirar: ";
            cin >> b;
            cout << endl;
            if(b > balance){
                cout << "¡El monto a cargar excede el saldo de la cuenta!" << endl;
            } else {
                balance -= b;
                return balance;
            }
        }
        void setBalance(int _balance){ balance = _balance; }
        int getBalance(){ return balance; }
    
    private:
        int b; 
        int balance;

};



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
