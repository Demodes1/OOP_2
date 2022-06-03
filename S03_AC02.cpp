#include <iostream>

using namespace std;

class Car {
    public:
        int serialNumber, year, price;
        string brand;

        Car(int _serialNumber,int _year, int _price, string _brand){
            serialNumber = _serialNumber;
            year = _year;
            price = _price;
            brand = _brand;        
        } 
        void setCarData(int _serialNumber,int _year, int _price, string _brand){
            serialNumber = _serialNumber; year = _year; price = _price; brand = _brand;
        }
        void getCarData(){
            cout << "Auto: " << brand << " con un precio de $" << price << " pesos" << endl;
            cout << "Numero de serie: " << serialNumber << " del año " << year << endl << endl;
        }
};

class CompactCar: public Car {
    public:
        int passengerNum;
        CompactCar(int _serialNumber,int _year, int _price, string _brand, int _passengerNum): Car(_serialNumber, _year, _price, _brand){
            serialNumber = _serialNumber;
            year = _year;
            price = _price;
            brand = _brand;
            passengerNum = _passengerNum;       
        }
        void setCompactCarData(int _serialNumber,int _year, int _price, string _brand, int _passengerNum){
            serialNumber = _serialNumber; year = _year; price = _price; brand = _brand; passengerNum = _passengerNum;
        }
        void getCompactCarData(){
            cout << "Auto compacto/Van: " << brand << " con espacio para " << passengerNum << " personas y con un precio de $" << price << " pesos" << endl;
            cout << "Numero de serie: " << serialNumber << " del año " << year << endl << endl;
        }
        
};

class LuxuryCar: public Car {
    public:
        LuxuryCar(int _serialNumber,int _year, int _price, string _brand,int _passengerNum, bool _hybrid): Car(_serialNumber, _year, _price, _brand){
            serialNumber = _serialNumber;
            year = _year;
            price = _price;
            brand = _brand;
            passengerNum = _passengerNum;       
            hybrid = _hybrid;   
        }
        void setLuxuryCarData(int _serialNumber,int _year, int _price, string _brand, int _passengerNum, bool _hybrid){
            serialNumber = _serialNumber; year = _year; price = _price; brand = _brand; passengerNum = _passengerNum; hybrid = _hybrid;
        }
        void getLuxuryCarData(){
            cout << "Auto de lujo: " << brand << " con espacio para " << passengerNum << " personas y con un precio de $" << price << " pesos" << endl;
            cout << "Numero de serie: " << serialNumber << " del año " << year << endl;
            cout << "Hibrido: " << ( hybrid == 1 ? "Si" : "No") << endl << endl;
        }
    private:
        bool hybrid;
        int passengerNum;
};

class Van: public CompactCar {
    public:
        Van(int _serialNumber,int _year, int _price, string _brand,int _passengerNum): CompactCar(_serialNumber, _year, _price, _brand,_passengerNum){
            serialNumber = _serialNumber;
            year = _year;
            price = _price;
            brand = _brand;
            passengerNum = _passengerNum;        
        }
};

class Truck: public Car {
    public:
        Truck(int _serialNumber,int _year, int _price, string _brand, int _capability, int _axle): Car(_serialNumber, _year, _price, _brand){
            serialNumber = _serialNumber;
            year = _year;
            price = _price;
            brand = _brand;
            capability = _capability;
            axle = _axle;        
        }
        void setTruckData(int _serialNumber,int _year, int _price, string _brand, int _capability, int _axle){
            serialNumber = _serialNumber; year = _year; price = _price; brand = _brand; capability = _capability; axle = _axle;
        }
        void getTruckData(){
            cout << "Camión: " << brand << " con capacidad de " << capability << " kg, " << axle << " ejes y con un precio de $" << price << " pesos" << endl;
            cout << "Numero de serie: " << serialNumber << " del año " << year << endl;
        }
    private:
        int capability;
        int axle;
};

int main(){

    Car vehicle1(1000,2003,150000,"Toyota");
    vehicle1.getCarData();

    CompactCar vehicle2(1001,2014,125000,"Honda",4);
    vehicle2.getCompactCarData();

    LuxuryCar vehicle3(1002,2022,1200000,"Tesla",4,0);
    vehicle3.getLuxuryCarData();

    Van vehicle4(1004,2000,80000,"Honda",8);
    vehicle4.getCompactCarData();

    Truck vehicle5(1005,2019,1200000,"Honda", 10000,2);
    vehicle5.getTruckData();

    return 0;
}