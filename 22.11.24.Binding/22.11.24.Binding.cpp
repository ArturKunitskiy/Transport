#include <iostream>
using namespace std;

class Transport
{
protected:

	string name;
	int kilogram;
	double fuel;

public:

	Transport() = default;
	Transport(const char* n, int kg, double f)
	{
		name = n;
		kilogram = kg;
		fuel = f;
	}
	virtual void deliveryPrice()
	{
		cout << "Delivery price unknown!" << endl;
	}
};

class Car :public Transport
{
public:
    Car() :Transport() {};
    Car(const char* n, int kg, double f) :Transport(n, kg, f) {};
    void deliveryPrice()
    {
        int delivery = 1000;
        cout << "Delivery price: " << delivery << endl;
    }
};

class Plane :public Transport
{
public:
    Plane() :Transport() {};
    Plane(const char* n, int kg, double f) : Transport(n, kg, f) {};
    void deliveryPrice()
    {
        int delivery = 5000;
        cout << "Delivery price: " << delivery << endl;
    }
};

class Ship :public Transport
{
public:
    Ship() :Transport() {};
    Ship(const char* n, int kg, double f) : Transport(n, kg, f) {};
    void deliveryPrice()
    {
        int delivery = 2500;
        cout << "Delivery price: " << delivery << endl;
    }
};

class Truck :public Transport
{
public:
    Truck() :Transport() {};
    Truck(const char* n, int kg, double f) : Transport(n, kg, f) {};
    void deliveryPrice()
    {
        int delivery = 500;
        cout << "Delivery price: " << delivery << endl;
    }
};

int main()
{
    Transport* transport;
    int result;
    cout << "Choose delivery: 1 - Car; 2 - Plane; 3 - Ship; 4 - Truck; " << endl;
    cin >> result;
    switch (result)
    {
    case(1):
        transport = new Car("Lexus", 3000, 7.3);
        break;
    case(2):
        transport = new Plane("Airbus", 50000, 700);
        break;
    case(3):
        transport = new Ship("Titanic", 30000000, 200000);
        break;
    case(4):
        transport = new Truck("Volvo", 10000, 40.0);
        break;
    }
    transport->deliveryPrice();
}