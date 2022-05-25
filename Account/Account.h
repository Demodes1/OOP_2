#include <iostream>

using namespace std;

// ----------------------------- Class -----------------------------
class Account {
    // ----------------------------- Methods -----------------------------
    public:
        Account(int _balance);

        void setAdd(int _balance);
        int getAdd();
        void setWithDraw(int _balance);
        int getWithDraw();
        void setBalance(int _balance);
        int getBalance();
    
    private:
        int b; 
        int balance;

};
