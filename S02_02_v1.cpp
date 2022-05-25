// Sesión 02 Clases: Actividad II Version 1
// Programmed by Guillermo Esquivel

#include <iostream>
#include <math.h>

using namespace std;

// ----------------------------- Class -----------------------------
class Circle {
    // ----------------------------- Methods -----------------------------
    public:
        // Methods for radius input
        void setRadius(int _r){
            r = _r;
        }
        void getRadius() {
            cout << "Ingresa el radio: ";
            cin >> r; 
            cout << endl;
        }
        // Methods for area
        void setArea(int _r){
            r = _r;
        }
        double getArea(){
            return (M_PI * pow(r,2));
        }
        // Methods for perimeter
        void setPerimeter(int _r){
            r = _r;
        }
        double getPerimeter(){
            return (2*M_PI * r);
        }
    private:
        int r;
};

// ----------------------------- Main -----------------------------
int main(){
    Circle miCirculo;
    
    miCirculo.getRadius();
    cout << "Area: " << miCirculo.getArea() << endl;
    cout << "Perimeter: " << miCirculo.getPerimeter() << endl;
    return 0;
}