#include <iostream>
using namespace std;
class Vehicle {
private:
    int fuel;  

public:
    Vehicle(int f) {
    fuel = f;
    }
 
    int getFuel() {
    return fuel;
    }

    void setFuel(int f) {
    fuel = f;
	}
  
    virtual void move() = 0;

    virtual ~Vehicle() {}
};

class Drone : public Vehicle {
public:
    Drone(int f) : Vehicle(f) {}

    void move() {
    if (getFuel() >= 10) {
    cout << "Drone moved (used 5 fuel)" << endl;
   setFuel(getFuel() - 5);
    } else {
    cout << "Drone can't move (low fuel)" << endl;
   }
    }
};

class Train : public Vehicle {
public:
    Train(int f) : Vehicle(f) {}

    void move() {
    if (getFuel() > 0) {
    cout << "Train moved (used 10 fuel)" << endl;
    setFuel(getFuel() - 10);
    } else {
    cout << "Train can't move (no fuel)" << endl;
}
    }
};

int main() {
    Vehicle* v;  

    Drone d(15);
    Train t(20);

    v = &d;   
    v->move();

    v = &t;  
    v->move();

    return 0;
}
/*#include <iostream>
using namespace std;

class Vehicle {
private:
    int fuel;

public:
    Vehicle(int f) {
        fuel = f;
    }

    int getFuel() {
        return fuel;
    }

    void setFuel(int f) {
        fuel = f;
    }

    virtual void move() = 0;

    virtual ~Vehicle() {}
};

class Drone : public Vehicle {
public:
    Drone(int f) : Vehicle(f) {}

    void move() {
        cout << "Drone moved (used 5 fuel)" << endl;
        setFuel(getFuel() - 5);
    }
};

class Train : public Vehicle {
public:
    Train(int f) : Vehicle(f) {}

    void move() {
        cout << "Train moved (used 10 fuel)" << endl;
        setFuel(getFuel() - 10);
    }
};

int main() {
    Vehicle* v;

    Drone d(15);
    Train t(20);

    v = &d;
    v->move();

    v = &t;
    v->move();

    return 0;
}*/


































