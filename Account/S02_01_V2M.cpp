
#include "Account.h"

Account::Account(int _balance){
    if (_balance <= 0){
        _balance = 0;
        cout << "Saldo invalido" << endl;
    } 
    else {
        balance = _balance;
    }
}
void Account::setAdd(int _balance){ balance = _balance;}
int Account::getAdd() {
    cout << "Ingresa el monto que deseas añadir: ";
    cin >> b;
    cout << endl;
    balance += b;
    return balance;
}
void Account::setWithDraw(int _balance){ balance = _balance; }
int Account::getWithDraw(){
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
void Account::setBalance(int _balance) { balance = _balance; }
int Account::getBalance(){ return balance;}


